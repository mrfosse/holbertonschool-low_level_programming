#include "holberton.h"

/**
 * array_range - creates an array of ints.
 * @min: min size.
 * @max: max size.
 * Return: returns pointer, NULL on fail.
 */
int *array_range(int min, int max)
{
	int *temp;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	temp = malloc(size * sizeof(temp));

	if (temp == NULL)
		return (NULL);

	for (i = 0; i < size; i++, min++)
		temp[i] = min;

	return (temp);
}
