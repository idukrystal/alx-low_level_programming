#include <stdlib.h>
/**
 * free_grid - frees a 2d chunk of memory
 * @grid: the memory adress
 * @height: depth of chunk
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
