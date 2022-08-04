#include <stdarg.h>

/**
 * sum_them_all - a vatiadic function that sums all iys unnamed arguments
 * @n: no of unamed arguments passed
 *
 * Return: sum of unnamed arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
