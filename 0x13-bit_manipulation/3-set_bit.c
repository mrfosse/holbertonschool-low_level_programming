#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - toggles the bit at given index.
 *
 * @n: number to check
 * @index: postion of bit to toggle
 * Return: returns 1, else -1 on fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number;

	if (index > 64)
		return (-1);

	number = 1 << index;
	*n = *n | number;
	return (1);

}

