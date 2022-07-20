#include "main.h"


/**
 * is_palindrome - checks if a string is a palidrome
 * @s: the string
 * Return: 0 if not 1 if
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len  = _strlen(s);


	for (; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
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
