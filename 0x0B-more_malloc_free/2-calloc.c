#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - making our own calloc using malloc
 * Description: see above
 * @nmemb: number of elements
 * @size: size of mem
 * Return: returns s oterwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int count, n;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = nmemb * size;
	s = malloc(n);
	if (s == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (count < n)
	{
		s[count] = 0;
		count++;
	}
	return (s);
}
