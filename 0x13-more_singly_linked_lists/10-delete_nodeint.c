#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a node at position idx
 * @head: the head of the list
 * @idx: the position
 * Return: 1 if succesfull -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *tmp, *node = NULL;

	if (head == NULL)
		exit(-1);

	if (idx == 0)
	{
		node  = *head;
	}
	else
	{
		for (tmp = *head; tmp  != NULL; tmp = tmp->next, i++)
		{
			if (i == idx - 1)
			{
				node = tmp->next;
				break;
			}
		}
	}
	if (node == NULL)
	{
		return (-1);
	}
	(idx == 0) ? (*head = node->next)  : (tmp->next  = node->next);
	free(node);
	return (1);
}
