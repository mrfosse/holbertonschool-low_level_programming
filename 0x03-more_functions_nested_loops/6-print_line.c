#include "holberton.h"

/**
 * print_line - prints a line ____ to n length.
 * Description: same as above
 * @n: number of _ to print.
 * Return: returns none.
 */
void print_line(int n)
{
	int a;

	a = 0;
	if (n > 0)
	{
		while (a <  n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
