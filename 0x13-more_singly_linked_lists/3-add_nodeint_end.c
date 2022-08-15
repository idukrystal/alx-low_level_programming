#include "lists.h"

/**
 * add_nodeint_end - adds node to end of list
 * @head: pointer to list
 * @n: new value
 * Return: new node pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	if (head == NULL)
		exit(-1);

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	tmp = *head;
	for (tmp = *head; tmp != NULL; tmp = tmp->next)
	{
		if (tmp->next == NULL)
		{
			tmp->next = node;
			return (node);
		}
	}
	*head = node;
	return (node);
}
