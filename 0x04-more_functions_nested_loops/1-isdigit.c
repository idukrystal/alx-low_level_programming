#include "main.h"

/**
 * _isdigit - checks if a number represents a digit in ascii
 * @c: - number to be checked
 *
 * Return: 1 if c is digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
