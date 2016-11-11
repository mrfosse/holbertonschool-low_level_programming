#include <stdlib.h>
#include "holberton.h"
/**
 * _realloc - allocates mem using malloc
 * Description: see above
 * @ptr: point to the memory
 * @old_size: size of ptr in bytes
 * @new_size: will be the new size after
 * Return: returns the new string.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *string, *temp;
	unsigned int count;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		temp = malloc(new_size);
		if (temp == NULL)
			return (NULL);
		return (temp);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	string = malloc(new_size);
	if (string == NULL)
	{
		return (NULL);
	}
	temp = ptr;
	count = 0;
	while (count < old_size)
	{
		string[count] = temp[count];
		count++;
	}
	free(ptr);
	return (string);
}
