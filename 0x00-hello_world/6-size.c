#include <stdio.h>

/**
 * main - Starting point of of this programme
 * Description: Prints the various sizes of c variables on current machine
 * Return: 0 if successfull and any other number if not
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of a int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
