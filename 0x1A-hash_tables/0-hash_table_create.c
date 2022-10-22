#include "structs.h"
#include <stdio.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **arr;
	hash_table_t *tabel;

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return NULL;
	tabel->array = arr;
	
}
