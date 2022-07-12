#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: string to print
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int i = 0;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

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
