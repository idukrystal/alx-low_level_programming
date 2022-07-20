/**
 * factorial - computes the factorial of n
 * @n: the number n
 *
 * Return: n fsctorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <=  1)
		return (1);

	return (n * factorial(n - 1));
}
