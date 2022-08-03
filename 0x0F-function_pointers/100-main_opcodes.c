#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: shold be equal to 1
 * @argv: should be a nimber
 * Return: 0 on success;
 */
int main(int argc, char **argv)
{
	char  *m = (char *)(main + 0);
	int i, b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);


	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		printf("%02hhx", *(m + i));
		if (i != (b - 1))
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
