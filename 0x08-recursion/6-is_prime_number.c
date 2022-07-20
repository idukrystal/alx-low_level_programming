#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	int max = _sqrt_recursion(n);

	if (n <= 0)
		return (0);

	return (prime(n, 2, max));
}

/**
 * prime - helper fuction for is_prime
 * @num: a number to examine
 * @val: stating number of examination
 * @val_max: ending of examination
 *
 * Return: 0 or 1
 */
int prime(int num, int val, int val_max)
{
	if (num % val == 0 || num == 1)
		return (0);
	if (val > val_max)
		return (1);
	return (prime(num, ++val, val_max));
}

/**
 * _sqrt_recursion - comoutes the natural squreroot of a number
 * @n: the number
 *
 * Return: the natural squreroot if found -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 1));
}

/**
 * is_sqrt - checks if val is the squreroot of num recussively
 * @num: the num;
 *
 * @val: possible squareroot
 *
 * Return: squreroot or -1
 */
int is_sqrt(int num, int val)
{
	int cur = val * val;

	if (cur  > num)
		return (val);
	if (cur  == num)
		return (val);
	return (is_sqrt(num, ++val));
}
