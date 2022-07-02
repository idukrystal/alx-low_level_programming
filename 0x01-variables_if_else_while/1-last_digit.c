#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - programs entry point
 * Description: Outputs the last digit of a randomly generated number
 * Return: 0 if succesfull 1 of something goes wrong
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last;

	last = n % 10;

	char *final_message;

	if (last < 6 && last != 0)
		final_message = "and is less than 6 and not 0";
	else if (last == 0)
		final_message = "and is 0";
	else if (last > 5)
		final_message = "and is greater than 5";

	printf("Last digit of %d is %d %s\n", n, last, final_message);
	return (0);
}
