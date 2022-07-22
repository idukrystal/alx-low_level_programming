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

	while (s[i] != '\0' && accept)//&& contains(accept, s[i]))
		i++;
	return (i);
}
