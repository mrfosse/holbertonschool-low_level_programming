#include "holberton.h"

/**
 * _calloc - new calloc using malloc
 * @nmemb: number of elements.
 * @size: size of mem.
 * Return: returns pointer, NULL on fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	temp = malloc(nmemb * size);
	if (temp == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		temp[i] = 0;

	return (temp);
}
