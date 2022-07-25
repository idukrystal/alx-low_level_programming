#include <stdlib.h>

/**
 * alloc_grid - returns a dynamic 2D array
 * @width: no of items in each array
 * @height: no of arrays
 * Return: pointer to 2D array or null
 */
int **alloc_grid(int width, int height)
{
	int **adds;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	adds = malloc(sizeof(int *) * height);

	if (adds == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		adds[i] = malloc(sizeof(int) * width);
		if (adds[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			adds[i][j] = 0;
	}
	return (adds);
}
