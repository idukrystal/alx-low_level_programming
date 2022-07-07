#include "main.h"

/**
 * print_diagonal  - prints a diagonal  line that is n characters long
 * @n: length of line to print
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = n; (i > 0) || (i == n); i--)
	{
		for (j = (n - i); j > 0; j--)
		{
			_putchar(' ');
		}
		if (i > 0)
			_putchar('\\');

		_putchar('\n');
	}
}
