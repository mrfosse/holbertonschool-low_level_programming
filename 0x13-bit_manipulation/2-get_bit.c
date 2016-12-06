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
	unsigned long int mask, count;
	int flag;

	flag = 0;
	count = 0;
	mask = 4611686018427387904;

	while (flag == 0)
	{
		if ((n & mask) == 0)
			;
		else
		{
			flag = 1;
			break;
		}
		mask = mask >> 1;
		count++;
	}
	if (index > 64)
		return (-1);
	count = 0;
	while (count < index)
	{
		mask = mask >> 1;
		count++;
	}
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}

