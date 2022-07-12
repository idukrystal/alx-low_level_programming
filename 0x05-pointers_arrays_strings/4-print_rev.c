#include "main.h"

/**
 * print_rev - prints a string in reverse
 *@s: string to be printed
 *
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len >= 1)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculatr length of
 *
 * Return: length of string @s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
