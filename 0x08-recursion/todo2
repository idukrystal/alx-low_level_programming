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
	int p = 0, i, j, len = _strlen_recursion(s), lenw = _strlen_recursion(w);

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

/**
 * _strlen_recursion - computes the length of a string
 * @s: the string
 *
 * Return: length of @s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
