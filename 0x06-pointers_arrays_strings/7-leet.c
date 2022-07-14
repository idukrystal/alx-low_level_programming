#include "main.h"

/**
 * leet - coverts a string to leet 1337 f0rm47
 *
 * @s: the string
 *
 * Return: 1337 of @s
 */
char *leet(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		s[i] = code(s[i]);
	}
	return (s);
}

/**
 * code  - converts a char to 1337 format
 * @c: the char
 *
 * Return:  c in 1337 format
 */
char code(char c)
{
	char leet[] = "aeotl";
	char LEET[] = "AEOTL";
	int val[] = {4, 3, 0, 7, 1};
	int i = 0;

	for (; i < 5; i++)
	{
		if (LEET[i] == c || leet[i] == c)
			return ('0' + val[i]);
	}
	return (c);
}
