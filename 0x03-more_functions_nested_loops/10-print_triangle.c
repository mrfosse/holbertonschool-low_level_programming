#include "holberton.h"

/**
 * print_triangle - prints half a square x high and x wide
 * Description: prints a triangle.
 * @size: size is the width and height of the grid.
 * Return: returns none.
 */
void print_triangle(int size)
{
	int a, b, counter;

	b = 0;
	a = 0;
	counter = size;

	if (size > 0)
	{
		while (b < size)
		{
			while (a < size)
			{
				counter = (size - a);
				if (counter > b + 1)
				{
					_putchar('.');
				}
				else
				{
					_putchar('#');
				}
				a++;
			}
			_putchar('\n');
			b++;
			a = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
