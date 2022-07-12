#include "main.h"

/**
 * rev_string - reverses a string
 *@s: string to be printed
 *
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int j = 0;
	char tmp[1000];

	while (j <= len)
	{
		tmp[j] = s[j];
		j++;
	}

	j = 0;

	while (len >= 1)
	{
		s[j] = (tmp[--len]);
		j++;
	}
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
