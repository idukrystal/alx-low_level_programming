#include "main.h"

/**
 * get_bit - get the value in a bit
 * @n: the number housing the bit
 * @index: the bit
 * Return: the value or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	long val;

	if (index >= sizeof(n) * 8)
		return (-1);
	n = n >> index;

	val = (1) & n;

	return ((val) ? 1 : 0);
}
