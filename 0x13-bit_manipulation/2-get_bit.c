#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - prints the bit from given index.
 *
 * @n: number to check
 * @index: postion of bit to return
 * Return: returns bit at ihndex postion.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;


	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1 << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}

