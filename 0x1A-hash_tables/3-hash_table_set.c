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
	val = malloc(sizeof(*val) * strlen(value));
	if (val == NULL)
		exit(0);;
	strcpy(val, value);
	for (new = ht->array[index]; new != NULL; new = new->next)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = val;
			return (1);
		}
	}
	new = malloc(sizeof(*new));
	if (new  == NULL)
	{
		free(val);
		exit(0);
	}
	ke = malloc(sizeof(*ke) * strlen(key));
	if (ke == NULL)
	{
		free(val);
		free(new);
		exit(0);
	}
	strcpy(ke, key);
	new->key = ke;
        new->value = val;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
