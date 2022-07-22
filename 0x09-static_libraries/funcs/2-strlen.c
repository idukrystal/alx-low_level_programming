#include "main.h"

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
