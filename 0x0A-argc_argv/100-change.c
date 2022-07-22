#include <stdio.h>

/**
 * main - print no minum nunernof coins to be giben as cahnge
 * @argc: number of command line arguments
 * @argv: array of all CL arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int no  = 0;
	int i, coin_no = 0;
	int change = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc < 0)
	{
		printf("0\n");
	}

        for (i = 0; i < 5; i++)
	{
		no =  change / coins[i];
		change -= no * coins[i];
		coin_no += no;
	}
	printf("%i\n", coin_no);
	return (0);
}
