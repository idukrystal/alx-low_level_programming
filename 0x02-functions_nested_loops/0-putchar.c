#include "main.h"
#include "_putchar.c"

/**
 * main - Program's starting point
 * Description: prints "_putchar" and moves to next line
 * Return: 0 on success
 */
int main(void)
{
	int i;
	char *message = "_putchar";

	for (i = 0; i < len(message); i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');
	return (0);
}

/**
 * len - Calculates the length of a string
 * @string: The string to calculate the length of
 *
 * Deacription: Counts all characters in string untill it hits a null character
 * Return: The length of the string
 */
int len(char *string)
{
	int i = 0;

	while (string[i] != '\n')
		i++;

	return (i);
}
