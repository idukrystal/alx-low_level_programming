/**
 * array_iterator - passea each elment of array to function
 * @array: the array
 * @size: size of array
 * @action: the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
