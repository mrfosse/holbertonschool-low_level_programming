#include "holberton.h"

/**
 * print_numbers - prints 0 through 9.
 * Description: prints 0 through 9 with _charput twice.
 * Return: returns none.
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		_putchar(48 + a);
		a++;
	}
	_putchar('\n');
}
