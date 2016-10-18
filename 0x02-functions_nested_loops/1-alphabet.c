#include "holberton.h"

/**
 * print_alphabet - uses _putchar to print a-z.
 * Description: prints each letter of the alphabet.i
 * Return: returns nothing.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);

	}

	_putchar('\n');
}
