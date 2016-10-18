#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day.
 * Description: prints 00:00 to 23:59
 * Return: returns none.
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = '0'; a < '3'; a++)
	{
		for (b = '0'; b < '4'; b++)
		{
			for (c = '0'; c < '6'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}

}
