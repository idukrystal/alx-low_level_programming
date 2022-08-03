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
	int i, int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);


	if ( < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%x ", *(m + i));
	}
	putchar('\n');
	return (0);
}
