#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2d grid
 * @grid: grid who's allocated memory will be freed
 * @height: grid column
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
