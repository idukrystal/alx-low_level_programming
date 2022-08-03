#include <stdio.h>

/**
 * main - prints its own opcodes
 * @argc: shold be equal to 1
 * @argv: should be a nimber
 * Return: 0 on success;
 */
int main(int argc, char **argv)
{
	char  *m = (char *)(main + 0);

	for (int i = 0; i < atoi(argv[1]); i++)
	{
		printf("%x ", *(m + i));
	}
	putchar('\n');
}
