#include "holberton.h"

/**
 * times_table - prints out 0*0 to 9*9
 * Description: prints and formats all times tables
 * Return: returns none.
 */
void times_table(void)
{
	int a, b, x;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			x = a * b;

			if (b == 0)
			{
				_putchar(48 + x);
			}
			else if (x < 10)
			{
				_putchar(' ');
				_putchar(48 + x);
			}
			else
			{
				_putchar(48 + (x / 10));
				_putchar(48 + (x % 10));
			}
			if (b == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
