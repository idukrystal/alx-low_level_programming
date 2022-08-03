#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: the first number
 * @b: the secound number
 * Return: the result on success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts one  number from another
 * @a: the first number
 * @b: the secound number
 * Return: the result on success
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first number
 * @b: the secound number
 * Return: the result on success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one number by another numbers
 * @a: the first number
 * @b: the secound number
 * Return: the result on success
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - computes a nubeber in mod (another number)
 * @a: the first number
 * @b: the secound number
 * Return: the result on success
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
