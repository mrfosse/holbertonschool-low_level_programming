#include "holberton.h"

/**
 * *alloc_grid - makes a grid.
 * @width: width of the grid.
 * @height: height of the grid.
 * Return: Returns the pointer, NULL on fail.
 */
int **alloc_grid(int width, int height)
{
	int **temp;
	int i, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	temp = malloc(width * sizeof(int *));
	if (temp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		temp[i] = malloc(width * sizeof(int));
		if (temp[i] == NULL)
		{
			for (; i >= 0; i--)
				free(temp[i]);
			free(temp);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (h = 0; h < width; h++)
			temp[i][h] = 0;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}
