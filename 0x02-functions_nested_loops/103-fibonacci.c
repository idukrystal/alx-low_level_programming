#include <stdio.h>

/**
 * main - Program start point
 * Description: write a program that finds and prints the sum of the even terms
 * Return: 0 on success
 */
int main(void)
{
	/* sum of even numbers in the sequence */
	long int sum = 0;

	/* starting numbers */
	long int x = 1;
	long int y = 2;

	sum += 2;

	/* temporary variable to hold x */
	long int tmp;

	/* counts how many numbers have been computed*/
	int counter = 2;

	int fib = 0;

	while (fib  <= 4000000)
	{
		fib = x + y;

		if (fib % 2 == 0)
			sum += fib;

		tmp = x;
		x = y;
		y = x + tmp;

		counter++;
	}
	printf("%li\n", sum);

	return (0);
}
