#include "3-calc.h"

/**
 * main - start point of program
 * @argc: - no of arguments passed at cl
 * @argv: - arguments passed
 * Return: 0 on success;
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = *get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = f(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", res);
	return (0);
}
