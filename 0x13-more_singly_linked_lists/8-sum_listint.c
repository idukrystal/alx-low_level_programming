#include "lists.h"

/**
 * sum_listint - comoutes sum of all ints in a list
 * @head: list head
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	for (node = head; node != NULL; node = node->next)
		sum += node->n;
	return (sum);
}
