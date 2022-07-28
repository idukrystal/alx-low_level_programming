#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concates two string
 * @s1: string 1
 * @s2: string 2
 * @n: no of char to cpy from 2
 * Return: pointer to cated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 != NULL) ? _strlen(s1) : 0;
	unsigned int len2 = (s2 != NULL) ? _strlen(s2) : 0;
	unsigned int len = (len2 > n) ? len1 + n : len1 + len2;
	char *cat = malloc(sizeof(char *) * (len + 1));
	unsigned int i;

	if (cat != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			cat[i] = s1[i];
		}
		for (; i < len; i++)
		{
			cat[i] = s2[i - len1];
		}
		cat[i] = '\0';
	}
	return (cat);
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
