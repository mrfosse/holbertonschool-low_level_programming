#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - prints the bit from given index.
 *
 * @n: number to check
 * @index: postion of bit to return
 * Return: returns bit at index postion.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;
	unsigned long int number;

	
	n ^= 1 << index;
	bit = (n >> index) & 1;
	
	if (bit == 1)
		return (1);
	else
		return (-1);

}

