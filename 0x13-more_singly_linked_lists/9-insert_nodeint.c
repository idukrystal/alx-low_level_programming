#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at position idx
 * @head: the head of the list
 * @idx: the position
 * @n: the new value to add
 * Return: pointer to new value or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	unsigned int i = 0;
	listint_t *tmp;

	if (head == NULL)
		exit(-1);

	node = malloc(sizeof(*node));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (tmp = *head; tmp  != NULL; tmp = tmp->next, i++)
	{
		if (i == idx - 1)
		{
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
	}
	return (NULL);
}
