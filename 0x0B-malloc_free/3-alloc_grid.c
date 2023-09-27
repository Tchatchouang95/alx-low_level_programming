#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Pointer to a 2 dimension array
 * @width: with of the array
 * @height: heigth of the array
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i, j;

	if (width > 0 && height > 0)
	{
		grid = (int **)malloc(sizeof(int *) * height);
		if (grid != NULL)
		{
			for (i = 0; i < height; i++)
			{
				grid[i] = (int *)malloc(sizeof(int) * width);
				if (grid[i] == NULL)
				{
					while (i >= 0)
						free(grid[i--]);
					free(grid);
					grid = NULL;
					break;
				}
				for (j = 0; j < width; j++)
					grid[i][j] = 0;
			}
		}
	}
	return (grid);
}
