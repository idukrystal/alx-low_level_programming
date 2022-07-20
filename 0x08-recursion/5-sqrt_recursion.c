#include "main.h"

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
		return (-1);
	if (cur  == num)
		return (val);
	return (is_sqrt(num, ++val));
}
