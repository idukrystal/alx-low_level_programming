#include "lists.h"

/**
 * list_len - computes the length of a linked list structure l
 * @h: the linked list
 * Return: result;
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	list_t tmp;
	list_t *node = NULL;
	int len;
	char *str;

	if (h != NULL)
	{
		tmp.str = h->str;
		tmp.len = h->len;
		tmp.next = h->next;
		node = &tmp;
	}
	for (; node != NULL; node = node->next)
	{
		i++;
	}
	return (i);
}
