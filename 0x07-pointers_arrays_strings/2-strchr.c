#include <stdio.h>

/**
 * _strchr - locates the first occurence of a char in a string
 * @s: the strinv
 *
 * @c: the char
 *
 * Return: adress of c if found otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char tmp;

	do {
		tmp  = s[i];
		if (c == tmp)
			return (s + i);

		i++;
	} while (tmp != '\0');

	return (NULL);
}
