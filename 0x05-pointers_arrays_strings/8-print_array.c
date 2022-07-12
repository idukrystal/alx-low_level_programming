#include "main.h"
#include <stdio.h>

/**
 * print_array - printa first nth terms of arra
 *
 * @a: aray to print
 *
 * @n: no of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
