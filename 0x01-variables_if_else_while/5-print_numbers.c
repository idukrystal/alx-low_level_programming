#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 * Description: prints all decimal digits 0-9
 * Return: 0 if succesful 1 if not
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
