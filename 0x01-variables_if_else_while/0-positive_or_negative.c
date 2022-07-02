#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of program
 * Description: prints out if a number is negative, positive or 0
n* Return: 0 if succesful 1 if not
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
