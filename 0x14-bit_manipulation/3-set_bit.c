#include "main.h"

/**
 * set_bit - changes the value if a bit to 1
 * @n: the number
 * @index: the bit to change
 * Return: 1 on success -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	long val = 1;

	if (index >= sizeof(n) * 8)
		return (-1);

	val = (1) << index;

	*n = *n | val;

	return (1);
}
