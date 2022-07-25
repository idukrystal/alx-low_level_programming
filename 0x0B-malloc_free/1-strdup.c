#include <stdlib.h>
#include "main.h"

/**
 * _strdup - ceates a copy of a string
 * @str: the string
 * Return: pointer to the copy or null
 */
char *_strdup(char *str)
{
	unsigned int i = 0, len = (str != NULL) ? _strlen(str), i : 0;
	char *dup = (len != 0) ? malloc((sizeof(char) * len) + 1) : NULL;

	if (dup != NULL)
	{
		for (i = 0; i <=  len; i++)
			dup[i] = str[i];
	}
	return (dup);
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
