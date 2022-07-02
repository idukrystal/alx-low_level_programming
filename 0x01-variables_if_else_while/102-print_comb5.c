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
	int unit;
	int tenth;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			tenth = i / 10;
			unit = i % 10;
			putchar(48 + tenth);
			putchar(48 + unit);
			putchar(' ');
			tenth = j / 10;
			unit = j % 10;
			putchar(48 + tenth);
			putchar(48 + unit);
			if (i == 98 && j == 99)
			{
				putchar(' ');
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
