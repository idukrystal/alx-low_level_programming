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

	last = (n < 0) ? (n / -1) % 10 : n % 10;
	_putchar('0' + last);

	return (last);
}
