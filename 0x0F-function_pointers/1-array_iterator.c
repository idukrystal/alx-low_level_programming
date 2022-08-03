#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - passea each elment of array to function
 * @array: the array
 * @size: size of array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t int i;

	if (!action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
