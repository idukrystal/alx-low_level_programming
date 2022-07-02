#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * main - entry point of program
 * Description: prints all decimal digits comma seprated
 * Return: 0 if succesful 1 if not
 */
int main(void)
{
	int i = 48;

	while (true)
	{
		putchar(i);
		if (i > 56)
			break;

		putchar(',');
		putchar(' ');

		i++;
	}
	putchar('\n');

	return (0);
}
