#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates randon numbers
 * Return: 0 on sucesd
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand();

	printf("%d\n", num);

	return (0);
}
