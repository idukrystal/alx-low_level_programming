#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(5);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "man", "war");
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "bible", "book");
    hash_table_set(ht, "oso", "staff");
    hash_table_set(ht, "zebra", "jacket");
    hash_node_t** ar = ht->array;

    for (unsigned long int i = 0; i < ht->size; i++)
    {
	    printf("%i : ", i);
	    for (hash_node_t *tmp = ar[i]; tmp != NULL; tmp = tmp->next)
		    printf("[%s : %s] -> ", tmp->key,tmp->value);
	    printf("\n");
    }
    return (EXIT_SUCCESS);
}
