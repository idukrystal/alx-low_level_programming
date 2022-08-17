#ifndef LISTS_H
#define LISTS_H
#include <string.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


typedef struct listpointer_s
{
	long p;
	struct listpointer_s *next;
} listptr_t;

/* prototypes */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* task 11 */
listint_t *reverse_listint(listint_t **head);
void reverse(listint_t **head, size_t len);
int ret_and_swap(listint_t *node, int old, int new);
int swap(listint_t *n, int val, size_t pos,size_t pos2);

size_t print_listint_safe(const listint_t *head);
int contains(const listptr_t *, const long);
listptr_t *add_nodeptr(listptr_t **head, const long n);

#endif /* LISTS_H */
