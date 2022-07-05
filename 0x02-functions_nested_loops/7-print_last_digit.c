#include "main.h"

/**
 * print_last_digit - outputs and returns the last digit of a number
 * @n: number to output its last digit
 *
 * Return: last digit of @n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	last = (last < 0) ? last * -1 : last;
	_putchar('0' + last);

	return (last);
}
