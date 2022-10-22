#include "hash_tables.h"

/**
 * key_index - generates a keys index
 * @size: size of hash table
 * @key: to be hashed
 * Return: hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ans  = (hash_djb2(key) / 256) * size;

	return ans;

}
