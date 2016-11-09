#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - frees the array.
 * Descritpion: measures the string s.
 * @grid: array to be freed
 * @height: height of array
 * Return: returns length of s.
 */
void free_grid(int **grid, int height)
{
	int count;

	count = 0;
	while (count < height)
	{
		free(grid[count]);
		count++;
	}
	free(grid);
}
