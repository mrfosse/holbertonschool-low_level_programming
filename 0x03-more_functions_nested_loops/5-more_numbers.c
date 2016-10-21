#include "holberton.h"

/**
 * more_numbers - prints 0 through 14 ten times
 * Description: same as above
 * Return: returns none.
 */
void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 14)
		{
			if (b <= 9)
			{
				_putchar(48 + b);
				b++;
			}
			else
			{
				_putchar((b / 10) + 48);
				_putchar((b % 10) + 48);
				b++;
			}
		}
		_putchar('\n');
		a++;
	}
}
