#include "main.h"

/**
 * print_square  - prints a diagonal  line that is n characters long
 * @n: length of line to print
 *
 */
void print_square(int n)
{
	int i;
	int j;

	for (i = n; (i > 0) || (i == n); i--)
	{
		for (j = n; j > 0; j--)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
