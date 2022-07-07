#include "main.h"

/**
 * print_number - prints n
 * @n: the number to print
 *
 */
void print_number(int n)
{
	unsigned int num = n;
	unsigned int div = 419;
	unsigned int tens = 10;

	if (n < 0)
	{
		_putchar('-');

		num = n * -1;
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
