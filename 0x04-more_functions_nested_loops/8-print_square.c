#include "main.h"

/**
 * print_square  - prints a squre of '#'
 * @n: width of square  to print
 *
 */
void print_square(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		if (i != (n-1))
			_putchar('#');

	}
	_putchar('#');
}
