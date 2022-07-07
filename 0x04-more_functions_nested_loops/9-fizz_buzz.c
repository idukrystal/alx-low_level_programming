#include <stdio.h>

/**
 * main - start point of program
 * Description: prints all number 1-100 but fizz or buzz for multiples of 3/5
 * Return: 0 on succes
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
			printf("%d", i);
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
