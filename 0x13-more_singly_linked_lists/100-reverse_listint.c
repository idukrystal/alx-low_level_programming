#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	reverse(head, listint_len(*head));
	return (*head);
}

void reverse(listint_t **head, size_t len)
{
	listint_t *node = *head;
        size_t  i = 1;
        for (; i <=  len / 2; i++, node = node->next)
        {
		node->n = swap(node, node->n, i, len - i + 1);
        }
}

int ret_and_swap(listint_t *node, int new, int old)
{
	node ->n = new;
	return old;
}

int swap(listint_t *node, int val, size_t pos,size_t pos2)
{
	if (node == NULL)
		exit(-1);
	if (pos == pos2)
	{
		return ret_and_swap(node, val, node->n);
	}
	return swap(node->next, val, ++pos, pos2);
}

size_t listint_len(const listint_t *head)
{
	if (head == NULL)
		return (0);
	return (1 + listint_len(head->next));
}
