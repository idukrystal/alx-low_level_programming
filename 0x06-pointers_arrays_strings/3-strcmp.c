#include "main.h"

/**
 * _strcmp  - comparess two strings
 * @dest: the first string
 *
 * @src: the secound string
 *
 * Return: 0 if equal -1 if src is greater 1 if dest is greater
 */
int _strcmp(char *dest, char *src)
{
	int len_d = _strlen(dest);
	int len_s = _strlen(src);
	int len = (len_d < len_s) ? len_d : len_s;
	int i = 0;
	char c, d;

	while (i < len + 1)
	{
		c = dest[i];
		d = src[i];

		if (c != d)
			return (c - d);
		i++;
	}
	return (0);
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
