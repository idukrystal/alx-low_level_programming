#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pounter to list
 * @n: value to add
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		exit(-1);
	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = (*head);
	*head = node;
	return (node);
}
