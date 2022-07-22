#include <stdio.h>

/**
 * main - entry point of program: prints no of CL args
 * @argc: number of command line arguments
 * @argv: array of all CL arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int no;

	if (!argv[0])
		return (404);
	no = (argc  > 0) ? argc - 1 : argc;
	printf("%i\n", no);
	return (0);

}
