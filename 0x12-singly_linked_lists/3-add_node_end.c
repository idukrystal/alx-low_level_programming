#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node to end of a linked list
 * @head: pointer to list
 * @str: value of new node
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = _strlen(str), i;
	char *name;
	list_t *node, *tmp;

	if (head == NULL)
		exit(1);
	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	if (str != NULL)
	{
		name = malloc(sizeof(char) * len);
		if (name == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	else
		name = NULL;
	for (i = 0; i <= len; i++)
		name[i] = str[i];
	node->str = name;
	node->len = len;
	node->next = NULL;
	tmp = *head;
	for (;; tmp = tmp->next)
	{
		if (tmp == NULL)
		{
			*head = node;
			break;
		}
		if (tmp->next == NULL)
		{
			tmp->next = node;
			break;
		}
	}
	return (node);
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculatr length of
 *
 * Return: length of string @s
 */
int _strlen(const char *s)
{
	int i = 0;

	if (s == NULL)
		return (-1);
	while (s[i] != '\0')
		i++;

	return (i);
}
