#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the anpendee string
 *
 * @src: the appended string
 *
 * Return: pointer to modified @dest
 */
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i = 0;

	for (; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = src[i];
	return (dest);
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
