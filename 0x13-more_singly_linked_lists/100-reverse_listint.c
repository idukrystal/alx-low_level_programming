#include "lists.h"

/**
 * reverse_listint - reverses a linked list of ints
 * @head: list head
 * Return: pointer to list;
 */
listint_t *reverse_listint(listint_t **head)
{
	reverse(head, listint_len(*head));
	return (*head);
}

/**
 * reverse - helper function
 * @head: same
 * @len: size of list
 */
void reverse(listint_t **head, size_t len)
{
	listint_t *node = *head;
	size_t  i = 1;

	for (; i <=  len / 2; i++, node = node->next)
	{
		node->n = swap(node, node->n, i, len - i + 1);
	}
}

/**
 * ret_and_swap - swap a nodes value and returns its old value
 * @node: the node
 * @new: new value
 * @old: old value
 * Return: old value
 */
int ret_and_swap(listint_t *node, int new, int old)
{
	node->n = new;
	return (old);
}

/**
 * swap - swap values symetrically to reverse a list
 * @node: the list
 * @val: the value to swap
 * @pos: current swap index
 * @pos2: index to swap with
 * Return: the value to be swaped with
 */
int swap(listint_t *node, int val, size_t pos, size_t pos2)
{
	if (node == NULL)
		exit(-1);
	if (pos == pos2)
	{
		return (ret_and_swap(node, val, node->n));
	}
	return (swap(node->next, val, ++pos, pos2));
}

/**
 * listint_len - computes the length of a linked list of ints
 * @head: the list
 * Return: length of list
 */
size_t listint_len(const listint_t *head)
{
	if (head == NULL)
		return (0);
	return (1 + listint_len(head->next));
}
