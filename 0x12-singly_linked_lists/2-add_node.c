#include "lists.h"
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	int len = _strlen(str), i;
	char *name;
	list_t *node;
	if (head == NULL)
		exit(1);

	node = malloc(sizeof *node);
	if (node == NULL)
		return NULL;
	if (str != NULL)
	{
		name = malloc(sizeof(char) * len);
		if (name == NULL)
		{
			free(node);
			return(NULL);
		}
	}
	else
	{
		name = NULL;
	}
	for (i = 0; i <= len; i++)
		name[i] = str[i];

	node->str = name;
	node->len = len;
	node->next = (*head);
	*head = node;

	return (node);

}
