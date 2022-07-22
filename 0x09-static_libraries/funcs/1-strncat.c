#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the anpendee string
 *
 * @src: the appended string
 *
 * @n: no of character to append
 *
 * Return: pointer to modified @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i = 0;

	for (; src[i] != '\0' && i < n; i++, len++)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
