#include "holberton.h"

/**
 * print_most_numbers - prints 0 through 9 but not 2 and 4
 * Description: prints 0 through 9 with _charput twice.
 * Return: returns none.
 */
void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		if ((a != 2) && (a != 4))
		{
			_putchar(48 + a);
			a++;
		}
		else
		{
			a++;
		}
	}
	_putchar('\n');
}
