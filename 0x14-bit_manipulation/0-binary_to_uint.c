#include "main.h"

/**
 * binary_to_uint - converts a string of binary number to an unsigned int
 * @b: binary number as a string
 * Return: b in decimal or 0 om error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0, tmp, p = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	while (i > 0)
	{
		tmp = b[--i] - '0';
		if (tmp > 1)
			return (0);
		num += tmp * (1  << p++);
	}
	return (num);
}
