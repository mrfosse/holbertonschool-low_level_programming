#include "holberton.h"

/**
 * create_array - creats an array with a specific char.
 * @size: size of the array.
 * @c: the char to add
 * Return: Returns the pointer, NULL on fail.
 */
char *create_array(unsigned int size, char c)
{
	char *temp;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	temp = malloc(size  * sizeof(c));
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		temp[i] = c;

	return (temp);
}
