#include "main.h"

/**
 * times_table - prints a 9 by 9 multiplication table
 */
void times_table(void)
{
	int i;
	int j;
	int multiple;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			multiple = i * j;
			if (multiple < 10)
			{
				_putchar('0' + multiple);
			}
			else
			{
				_putchar('0' + (multiple / 10));
				_putchar('0' + (multiple % 10));
			}
			if (j == 9)
				break;

			_putchar(',');
			_putchar(' ');

			if ((multiple + i) >= 10)
				continue;
			_putchar(' ');
		}
		_putchar('\n');
	}
}
