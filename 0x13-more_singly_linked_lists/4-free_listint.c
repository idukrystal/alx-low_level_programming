#include "lists.h"

/**
 * free_listint - frees a lost of ints
 * @head: starting node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
