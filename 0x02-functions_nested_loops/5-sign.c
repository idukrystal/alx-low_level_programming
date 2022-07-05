#include "main.h"

/**
 * print_sign  - Checks if a  number is a positive, negative, prints its sign
 * @n: The number to be checked
 *
 * Return: 1  if number is positive, 0 if number is 0, -1 if it is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
