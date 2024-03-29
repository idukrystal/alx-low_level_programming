#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - crrates an hash table
 * @size: hash table size
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **arr = NULL;
	hash_table_t *tabel = malloc(sizeof(*tabel));

	if (tabel == NULL)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
	{
		free(tabel);
		return (NULL);
	}
	tabel->size = size;
	tabel->array = arr;

	return (tabel);
}
