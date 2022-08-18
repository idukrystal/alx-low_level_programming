#include "main.h"

/**
 * print_binary - prints a number in binary
 * @c: the number
 */
void print_binary(unsigned long int c)
{
	int shift = sizeof(c) * 8;
	unsigned long val = 0;
	unsigned long s = (1) << (shift - 1);

	if (c == 0)
	{
		_putchar('0');
		return;
	}
	for (; val == 0 && s != 0; s = s >> 1, val = c & s)
	{
	}
	for (; s != 0; s = s >> 1, val = c & s)
	{
		if (val == 0)
			_putchar('0');
		else
			_putchar('0' + 1);
	}
}
