#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins two string together
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = (s1 != NULL) ? _strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? _strlen(s2) : 0;
	unsigned int len = len1 + len2;
	char *new = malloc((sizeof(char) * len) + 1);
	unsigned int i = 0;

	if (s1 != NULL && new != NULL)
	{
		for (; i < len1; i++)
			new[i] = s1[i];
	}
	if (s2 != NULL && new != NULL)
	{
		for (; i <= len; i++)
			new[i] = s2[i - len1];
	}
	if (new != NULL)
		new[i] = '\0';

	return (new);
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
