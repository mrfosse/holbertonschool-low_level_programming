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

	if (size = 0)
		return (NULL);
	temp = malloc((size + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		temp[i] = c;
	i++;
	temp[i] = '\0';
	return (temp);
}
