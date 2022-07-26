/**
 * free_grid - frees a 2d chunk of memory
 * @grid: the memory adress
 * @height: depth of chunk
 */
void free_grid(int **grid, int height)
{
	int i;
	int j;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
