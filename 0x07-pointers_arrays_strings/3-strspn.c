#include "main.h"

/**
 * _strspn - computes how many n chars of s contains a char in accept
 * @s: the string to check
 *
 * @accept: string of valid chars
 *
 * Return: the number of chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0' && contains(accept, s[i]))
		i++;
	return (i);
}

/**
 * contains - checks if a string contains a char
 * @s: the string
 *
 * @c: the char
 *
 * Return: 1 if char is found 0 othewise
 */
int contains(char *s, char c)
{
	unsigned int i = 0;
	char tmp;

	do {
		tmp = s[i];
		if (tmp == c)
			return (1);

		i++;
	} while (tmp != '\0');

	return (0);
}
