#include "holberton.h"

/**
 * print_square - prints a square x high and x wide
 * Description: same as above
 * @size: size is the width and height
 * Return: returns none.
 */
void print_square(int size)
{
	int a, b;

	b = 0;

	if (size > 0)
	{
		while (b < size)
		{
			a = 0;
			while (a < size)
			{
				_putchar('#');
				a++;
			}
			_putchar('\n');
			b++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
