#include "holberton.h"
#include <stdio.h>
/**
 * flip_bit - switches the bit N to M.
 *
 * @n: number to flip.
 * @m: number to flip to.
 * Return: returns number of times needed to flip from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int holder;
	unsigned int count;
	
	holder = n ^ m;

	while (holder > 0)
	{
		if ((holder & 1) == 1)
			count++;
		holder = holder >> 1;
	}
	return (count);
}

