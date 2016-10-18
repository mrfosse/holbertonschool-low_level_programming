#include "holberton.h"

/**
 * times_table - prints out 0*0 to 9*9
 * Description: prints and formats all times tables
 * Return: returns none.
 */
void times_table(void)
{
	int a, b, x, y;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			x = (a * b) / 10;
			y = (a * b) % 10;

			if (!(x == 0))
			{
				_putchar('0' + x);
				_putchar('0' + y);
			}
			else
			{
				_putchar('0' + y);
			}
			if (!(b == 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
