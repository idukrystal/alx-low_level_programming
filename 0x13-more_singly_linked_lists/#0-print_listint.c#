#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a liked lists of integers
 * @h: the linked list
 * Return: no of nodes in tbe list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	size_t count = 0;

	for (node = h; node != NULL; node = node->next)
	{
		printf("%i\n", node->n);
		count++;
	}
	return (count);
}
