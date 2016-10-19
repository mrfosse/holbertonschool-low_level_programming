#include "holberton.h"

/**
 * print_times_table - prints out times table n times
 * Description: prints and formats all times tables from n to n
 * @n: what number to count up too.
 * Return: returns none.
 */
void print_times_table(int n)
{
	int a, b, x;

	if (!((n > 15) || (n < 0)))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				x = a * b;

				if (b == 0)
				{
					_putchar(48 + x);
				}
				else if (x < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + x);
				}
				else if (x < 100)
				{
					_putchar(' ');
					_putchar(48 + (x / 10));
					_putchar(48 + (x % 10));
				}
				else
				{
					_putchar(48 + ((x / 10) / 10));
					_putchar(((x / 10) % 10) + 48 );
                                        _putchar(48 + (x % 10));
				}
				if (b ==  n)
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
}
