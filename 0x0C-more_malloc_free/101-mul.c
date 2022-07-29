#include <stdlib.h>
#include "main.h"
#include <inttypes.h>
#include <stdint.h>
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long long mul;
int i, j;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = strtoull(argv[1], NULL, 10) * strtoull(argv[2], NULL, 10);
	printf("%llu\n", mul);
return (0);
}
