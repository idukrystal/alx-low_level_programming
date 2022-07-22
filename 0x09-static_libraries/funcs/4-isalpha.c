#include "main.h"

/**
 * _isalpha - Checks if an ascii number is a letter
 * @c: The  ascii number to be checked
 *
 * Return: 0 if number is an ascii letter, 1 if not
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);

	return (0);
}
