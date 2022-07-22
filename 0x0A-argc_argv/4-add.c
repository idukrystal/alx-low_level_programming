#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point of program: adds  its Cl args
 * @argc: number of command line arguments
 * @argv: array of all CL arguments
 * Return: 0 on success 1 on error
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", sum);
	return (0);
}

/**
 * is_number - compute if a string is a valid number
 * @s: the string
 * Return: 1 if its a number 0 otherwise
 */
int is_number(char *s)
{
	int i;

	for (i = 0; i < (int) strlen(s); i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}
