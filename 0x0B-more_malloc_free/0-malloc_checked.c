#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocates mem using malloc
 * Description: see above
 * @b: size of
 * Return: returns s otherwise exit 98
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
