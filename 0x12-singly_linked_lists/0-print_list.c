#include "lists.h"

/**
 * print_list - prints  linked list structure
 * @h: list head
 * Return: no of item printed
 */
size_t print_list(const list_t *h)
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
		if (node->str  == NULL)
		{
			len = 0;
			str = "(nil)";
		}
		else
		{
			len = node->len;
			str = node->str;
		}
		printf("[%d] %s\n", len, str);
		i++;
	}
	return (i);
}
