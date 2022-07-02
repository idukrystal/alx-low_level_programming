#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 * Description: prints all hexdecimal digits
 * Return: 0 if succesful 1 if not
 */
int main(void)
{
	int i;
	char c;

	for (i = 48; i < 58; i++)
		putchar(i);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
