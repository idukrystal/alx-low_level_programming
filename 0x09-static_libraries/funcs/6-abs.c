#include "main.h"

/**
 * _abs - Computes the absolute valie of a number
 * @n: Number to calculate its absolute value
 *
 * Return: The absolute value of @n
 */
int _abs(int n)
{
	int ab;

	ab = (n >= 0) ? n : (n * -1);

	return (ab);
}
