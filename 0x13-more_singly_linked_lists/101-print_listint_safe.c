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
		if (!contains(adds, (long)node))
		{
			printf("[%p] %i\n",  (void *)node, node->n);
			add_nodeptr(&adds, (long) node);
			count++;
		}
		else
		{
			printf("-> [%p] %i\n", (void *) node, node->n);
			break;
		}
	}
	free_listptr(adds);
	return (count);
}
