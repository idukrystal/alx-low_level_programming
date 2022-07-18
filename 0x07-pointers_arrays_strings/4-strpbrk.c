#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searces for first occurence of any char in accept in  s
 * @s: the string to check
 *
 * @accept: string of valid chars
 *
 * Return: a pointer to first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	char tmp = '!';

	while (tmp != '\0')
	{
		tmp = s[i];

		if (contains(accept, tmp))
			return (s + i);
		i++;
	}
	return (NULL);
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

	while(tmp != '\0'){
		tmp = s[i];
		if (tmp == c)
			return (1);

		i++;
	}

	return (0);
}
