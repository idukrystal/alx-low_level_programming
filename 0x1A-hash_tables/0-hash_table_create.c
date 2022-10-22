#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **arr = NULL;
	hash_table_t *tabel = malloc(sizeof(*tabel));

	if (tabel == NULL)
		return NULL;
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return NULL;
	tabel->array = arr;

	return tabel;
}
