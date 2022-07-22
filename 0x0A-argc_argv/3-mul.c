#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point of program: multiplies its Cl args
 * @argc: number of command line arguments
 * @argv: array of all CL arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
