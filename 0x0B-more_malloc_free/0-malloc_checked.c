#include "holberton.h"
/**
 * malloc_checked - alloctes memory using malloc.
 * @b: size.
 * Return: returns pointer, otherwise 98 on fail.
 */
void *malloc_checked(unsigned int b)
{
	void *temp;

	temp = malloc(b);
	if (temp == NULL)
	{
		exit(98);
	}
	return (temp);
}
