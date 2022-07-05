#include "main.h"

/**
 * print_times_table - prints an n by n multiplication table
 * @n: determines the limit of the multiplication table
 */
void print_times_table(int n)
{
	int i;
	int j;
	int multiple;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			multiple = i * j;

			if (multiple >= 100)
			{
				_putchar('0' + (multiple / 100));
			}
			if (multiple >= 10)
			{
				_putchar('0' + ((multiple % 100) / 10));
			}
			_putchar('0' + multiple % 10);
			if (j == n)
				break;
			_putchar(',');
			_putchar(' ');
			if ((multiple + i) >= 100)
				continue;
			_putchar(' ');
			if ((multiple + i) >= 10)
				continue;
			_putchar(' ');
		}
		_putchar('\n');
	}
}
