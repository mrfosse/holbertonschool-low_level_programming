#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - prints the bit from given index.
 *
 * @n: number to check
 * @index: postion of bit to return
 * Return: returns bit at index postion.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, count;

	count = 0;
	mask = 32768;

	while (count < index)
	{
		mask = mask >> 1;
		count++;
	}
	if ((n & mask) == 0)
		return(0);
	else
		return(1);
}

