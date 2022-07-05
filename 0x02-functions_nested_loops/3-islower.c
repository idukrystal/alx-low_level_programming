#include "main.h"

/**
 * _islower - Checks if an ascii number is a lowercase letter
 * @c: The  ascii number to be checked
 *
 * Return: 0 if number is a lowercase ascii, 1 if not
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);

	return (0);
}
