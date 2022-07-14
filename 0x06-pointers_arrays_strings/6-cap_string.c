#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @s: the string
 *
 * Return: a pointer to modified @s
 */
char *cap_string(char *s)
{
	int len = _strlen(s);
	int i = 0;
	char c;
	int cap = 0;

	for (; i < len; i++)
	{
		c = s[i];
		if (isseprator(c))
		{
			cap = 1;
			continue;
		}
		if (cap)
		{
			if (c <= 'z' && c >= 'a')
				s[i] = c - 32;
			cap = 0;
		}
	}
	return (s);
}

/**
 * isseprator - checks if a char is a word seprator
 * @c: the char
 *
 * Return: 0 if c is not a seprator 1 if it is
 */
int isseprator(char c)
{
	char *seprators = ",;.!\?\"(){} \t\n\v";
	int i = 0;

	for (; i < 14; i++)
	{
		if (seprators[i] == c)
			return (1);
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
