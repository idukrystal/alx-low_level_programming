#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes woth a char
 * @size: size of array
 * @c : the character
 * Return: pointer to the array or null if allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (size == 0) ?  NULL : malloc(sizeof(char) * size);

	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
