#include "lists.h"

/**
 * pop_listint - remives first item in list
 * @head: pointer to list
 * Return: value that was removed
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val = 0;

	if (head == NULL)
		exit(-1);

	if (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		val = tmp->n;
		free(tmp);
	}
	return (val);
}
