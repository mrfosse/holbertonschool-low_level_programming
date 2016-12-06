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
	signed long int mask;
	int flag;

	mask = (sizeof(unsigned long int) * 8) - 1;
	flag = 0;

	while (mask >= 0)
	{
		if ((n >> mask) == 1)
			flag = 1;

		if (flag == 1)
		{
			if (n >> mask & 1)
				_putchar('1');
			else
				_putchar('0');
		}

		mask--;
	}
	if (flag == 0)
		_putchar('0');
}

