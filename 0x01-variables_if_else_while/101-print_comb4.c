#include <stdio.h>

/**
 * main - starting point of program
 * Description: prints all posible 2 digit combination of 0-9 10 is same as 01
 * Return: 0 if succesfull 1 if not
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i == 7)
				{
					putchar('\n');
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
