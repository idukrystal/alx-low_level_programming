#include <stdio.h>

/**
 * main - entry point of program: prints all CL args
 * @argc: number of command line arguments
 * @argv: array of all CL arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i <  argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
