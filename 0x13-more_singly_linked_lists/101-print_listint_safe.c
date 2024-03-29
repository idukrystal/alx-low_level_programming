#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a liked lists of integer
 * @h: the linked list
 * Return: no of nodes in tbe list
 */
size_t print_listint_safe(const listint_t *h)
{
	const listint_t *node;
	size_t count = 0;
	listptr_t *adds = NULL;

	for (node = h; node != NULL; node = node->next)
	{
		if (!contains2(adds, (long)node))
		{
			printf("[%p] %i\n",  (void *)node, node->n);
			add_nodeptr2(&adds, (long) node);
			count++;
		}
		else
		{
			printf("-> [%p] %i\n", (void *) node, node->n);
			break;
		}
	}
	free_listptr2(adds);
	return (count);
}

#ifndef Mall
#define Mall

/**
 * add_nodeptr2 - adds a new node
 * @head: pounter to list
 * @n: value to add
 * Return: pointer to new node
 */
listptr_t *add_nodeptr2(listptr_t **head, const long n)
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
 * contains2 - checks if
 * @head: head
 * @p: p
 * Return: 1 if found else 0
 */
int contains2(const listptr_t *head, const long p)
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
 * free_listptr2 - frees a lost of ints
 * @head: starting node
 */
void free_listptr2(listptr_t *head)
{
	if (head == NULL)
		return;
	free_listptr2(head->next);
	free(head);
}
#endif
