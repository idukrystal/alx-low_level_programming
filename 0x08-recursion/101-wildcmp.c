#include "main.h"

/**
 * wildcmp - checks if a string matches a regular expresuon
 * @s: the string
 * @w: the regular expression
 *
 * Return: 1 if match 0 otherwise
 */
int wildcmp(char *s, char *w)
{
	char b = w[0],  a, tmp = '*';
	int p = 0, i, j, len = _strlen(s), lenw = _strlen(w);

	for (i = 0 ; i < len; i++)
	{
		a = s[i];
		if (a == b)
		{
			b = w[++p];
			continue;
		}
		else if (b == '*')
		{
			tmp = '*';
			j = 0;
			while (tmp == '*')
			{
				tmp = w[p + j];
				j++;
			}
			if (a == tmp)
				p += --j;
			b = w[p];
			if (p < (lenw  - 1))
				b = w[++p];
			continue;
		}
		else if (p != 0 && w[p - 1] == '*')
			continue;
		return (0);
	}
	p++;
	while (p < lenw)
	{
		b = w[p++];
		if (b != '*')
			return (0);
	}
	return (1);
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
