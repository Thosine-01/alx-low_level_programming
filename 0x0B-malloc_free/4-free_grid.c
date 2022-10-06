#include <stdio.h>
#include "main"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previosly created by alloc function
 * @grid: 2d grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
