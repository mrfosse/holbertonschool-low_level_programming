#include "holberton.h"

/**
 * free_grid - makes a grid.
 * @grid: width of the grid.
 * @height: height of the array.
 * Return: Returns the pointer, NULL on fail.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
