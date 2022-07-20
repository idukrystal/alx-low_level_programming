#include "main.h"


/**
 * is_palindrome - checks if a string is a palidrome
 * @s: the string
 * Return: 0 if not 1 if
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len  = _strlen_recursion(s);


	for (; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
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
