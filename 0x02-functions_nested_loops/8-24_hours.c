#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day.
 * Description: prints 00:00 to 23:59
 * Return: returns none.
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar(a / 10 + 48);
			_putchar(a % 10 + 48);
			_putchar(':');
			_putchar(b / 10 + 48);
			_putchar(b % 10 + 48);
			_putchar('\n');
		}
	}

}
