#include "main.h"

/**
 * puts_half - prints last half of a string
 * @str: string to print half of
 *
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;
	int n;

	n = (len % 2 == 0) ? len / 2 : (len / 2) + 1;
	for (i = n; i < len; i++)
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
