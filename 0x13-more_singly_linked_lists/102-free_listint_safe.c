#include "lists.h"

/**
 * free_listint_safe - frees a loop even if it is looped
 * @h: lists head
 * Return: list size;
 */
size_t free_listint_safe(listint_t **h)
{
	listptr_t *adds = NULL;
	size_t size = free_t(*h, &adds);

	free_listptr(adds);
	*h = NULL;
	h = NULL;
	return (size);
}

#ifndef Mall
#define Mall
/**
 * add_nodeptr - adds a new node
 * @head: pounter to list
 * @n: value to add
 * Return: pointer to new node
 */
listptr_t *add_nodeptr(listptr_t **head, const long n)
{
	listptr_t *node;

	if (head == NULL)
		exit(98);
	node = malloc(sizeof(*node));
	if (node == NULL)
		exit(98);

	node->p = (long) n;
	node->next = (*head);
	*head = node;
	return (node);
}

/**
 * contains - checks if
 * @head: head
 * @p: p
 * Return: 1 if found else 0
 */
int contains(const listptr_t *head, const long p)
{
	const listptr_t *node;

	for (node = head; node != NULL; node = node->next)
	{
		if (node->p == p)
			return (1);
	}
	return (0);
}

/**
 * free_listptr - frees a lost of ints
 * @head: starting node
 */
void free_listptr(listptr_t *head)
{
	if (head == NULL)
		return;
	free_listptr(head->next);
	free(head);
}
#endif
/**
 * free_t - frees a lost of ints
 * @head: starting node
 * @adds: adresses to be freed
 * Return: size of list
 */
size_t free_t(listint_t *head, listptr_t **adds)
{
	size_t i = 1;

	if (head == NULL)
		return (0);
	if (contains(*adds, (long) head))
		return (0);
	add_nodeptr(adds, (long) head);
	i += free_t(head->next, adds);
	free(head);
	return (i);
}
