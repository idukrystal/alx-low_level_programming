#include "main.h"

/**
 * _isupper - Checks if an a number represents an uppercase character in ascii
 * @c: the number to be checked
 *
 * Return: 1 if c is uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
