#include "main.h"

/**
 * print_number - prints n
 * @n: the number to print
 *
 */
void print_number(int n)
{
	int num = n;
	int div = 419;
	int tens = 10;

	if (num < 0)
	{
		_putchar('-');

		num *= -1;
	}


	while (div != 0)
	{
		div = num / tens;

		tens *= 10;
	}

	tens /= 100;
	for (; tens >= 1; tens /= 10)
	{
		div = num / tens;
		_putchar('0' + div);
		num = num - (div * tens);
	}

}
