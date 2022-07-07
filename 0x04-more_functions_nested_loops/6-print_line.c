#include "main.h"

/**
 * print_line - prints a line that is n characters long
 * @n: length of line to print
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <  n; i++)
	{
		_putchar('_');

	}
	_putchar('\n');
}
