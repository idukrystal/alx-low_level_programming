#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: kist head
 * @index: index to find;
 * Return: node at index if found or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	for (; node != NULL && i != index; node = node->next, i++)
		;
	return (node);
}
