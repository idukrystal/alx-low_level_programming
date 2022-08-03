/**
 * int_index - searches a array of numbers
 * @array: the array to search
 * @size: array size
 * @cmp: saerch function
 * Return: index of find
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
