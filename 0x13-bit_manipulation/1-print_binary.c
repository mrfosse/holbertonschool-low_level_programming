#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - prints binary form on int n.
 *
 * @n: number to printed to binary.
 * Return: returns none.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, flag;

	flag = 0;
	mask = 32768;

	while (mask > 0)
	{
		if ((n & mask) == 0)
			;
		else
			flag = 1;

		if (flag == 1)
		{
			if ((n & mask) == 0)
				_putchar('0');
			else
				_putchar('1');
		}

		mask = mask >> 1;
	}
	if (flag == 0)
		_putchar('0');
}

