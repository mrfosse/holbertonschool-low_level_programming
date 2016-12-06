#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - toggles the bit to 0 at given index.
 *
 * @n: number to check
 * @index: postion of bit to toggle
 * Return: returns 1, else -1 on fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

