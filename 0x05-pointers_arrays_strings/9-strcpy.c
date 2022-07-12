#include "main.h"

/**
 * _strcpy - copies src to dest
 * @src: string to copy
 *
 * @dest: buffer to copy it to
 *
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = _strlen(src);

	for (; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];

	return (dest);
}
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
