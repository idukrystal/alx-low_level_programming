#include <stdio.h>

/**
 * main - Starting point of of this programme
 * Description: Prints a specific error the screen
 * Return: 0 if successfull and any other number if not
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", message);
	return (1);
}
