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

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
