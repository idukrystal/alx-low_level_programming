#include "main.h"

/**
 * swap_int - swap the values storef in two diffrent memory locations
 * @a: location 1
 *
 * @b: location 2
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
