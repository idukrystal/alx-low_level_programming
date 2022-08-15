#include "lists.h"
#include <stdio.h>

/**
 * listint_len  - computes the size of a liked lists of integers
 * @h: the linked list
 * Return: no of nodes in tbe list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	size_t count = 0;

	for (node = h; node != NULL; node = node->next)
	{
		count++;
	}
	return (count);
}
