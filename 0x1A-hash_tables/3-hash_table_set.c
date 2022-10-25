#include "hash_tables.h"

/**
 * hash_table_set - set hash on a cpb web msner
 * @ht: stuff
 * @key: more stuff
 * @value: most stuff
 * Return: an int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *val;
	char *ke;
	hash_node_t *new;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		exit(0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(*new));
	if (new  == NULL)
		exit(0);
	val = malloc(sizeof(*val) * strlen(value));
	if (val == NULL)
	{
		free(new);
		exit(0);
	}
	ke = malloc(sizeof(*ke) * strlen(key));
	if (ke == NULL)
	{
		free(new);
		free(val);
		exit(0);
	}
	strcpy(val, value);
	strcpy(ke, key);
	new->key = ke;
	new->value = val;

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
