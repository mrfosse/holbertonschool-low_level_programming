#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 * Description: same as above
 * @n: number of paces to print, also number of lines to print.
 * Return: returns none.
 */
void print_diagonal(int n)
{
	int a, b, c;

	b = 0;
	c = n;

	if (n > 0)
	{
		while (b < n)
		{
			a = c;
			while (a < n)
			{
				_putchar(' ');
				a++;
			}
			_putchar('\\');
			_putchar('\n');
			b++;
			c--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
