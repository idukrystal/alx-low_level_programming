#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 * Description: prints the alphabets in lowercase excliding q and e
 * Return: 0 if succesful 1 if not
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}

	putchar('\n');

	return (0);
}
