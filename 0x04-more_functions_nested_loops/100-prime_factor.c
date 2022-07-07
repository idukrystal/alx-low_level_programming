#include "main.h"

/**
 * main - programs entry point calls
 * Description: outputs the highest prime factor of a number
 * Return: 0 on success;
 */
int main(void)
{
	long int num = 612852475143;
	long int tmp;
	int i;
	int s;

	while (true)
	{
		s = round(sqrt(num));
		tmp = num;
		for (i = 2; i <= s; i++)
		{
			if (num % i == 0 && is_prime(i))
			{
				num /= i;
				break;
			}
		}
		if (tmp == num)
		{
			printf("%li\n", num);
			break;
		}
	}
	return (0);
}

/**
 * is_prime - Checks if a number is a prime number
 * @num: number to be checked
 *
 * Return: 1 if number is prime 0 otherwise
 */
int is_prime(int num)
{
	int i = 2;
	int re = round(sqrt(num));

	while (i <= re)
	{
		if (num % i == 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
