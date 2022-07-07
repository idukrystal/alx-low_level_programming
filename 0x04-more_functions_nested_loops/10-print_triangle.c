#include "main.h"

/**
 *print_triangle - prints a tringle using #
 *@size: length of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = (size - 1); i >= 0; i--)
	{
		for (j = 0; j < (i); j++)
		{
			_putchar(' ');
		}

		for (j = 0; j < (size - i); j++)
		{
			_putchar('#');
		}

		if (i != 0)
			_putchar('\n');
	}
	_putchar('\n');
}
