#include "main.h"

/**
 * string_toupper - converts a string to uppercase
 * @s: the strint to convert
 *
 * Return: pointer to @s
 */
char *string_toupper(char *s)
{
	int i = 0;
	char c;

	while ((c = s[i]) != '\0')
	{
		if (c >= 'a' && c <= 'z')
			s[i] = c - 32;
		i++;
	}
	return (s);
}
