#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *alloc_grid - creates a grid
 * Description: and returns the new pointer.
 * @width: the width of the grid
 * @height: the height of the gird.
 * Return: returns the pointer or NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int count, count2;
	int **a;

	a = malloc(width * sizeof(int *));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	count = 0;
	while (count < height)
	{
		a[count] = malloc(width * sizeof(int));
		count++;
	}
	count = 0;
	while (count < height)
	{
		free(a[count]);
		count++;
	}
	count = 0;
	while (count < height)
	{
		count2 = 0;
		while (count2 < width)
		{
			a[count][count2] = 0;
			count2++;
		}
		count++;
	}
	if (a)
	{
		return (a);
	}
	else
	{
		return (NULL);
	}
}
