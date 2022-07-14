#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array
 *
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for (; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}

}
