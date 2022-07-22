#include "main.h"

/**
 * _strncpy - copies one strings to another
 * @dest: the string to copy to
 *
 * @src: the string to be copied
 *
 * @n: no of chracters of @src to be copied
 *
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
