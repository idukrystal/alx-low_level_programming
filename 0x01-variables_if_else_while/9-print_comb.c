#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 * Description: prints all decimal digits
 * Return: 0 if succesful 1 if not
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
