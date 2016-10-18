#include "holberton.h"

/**
 * print_sign - check to see if positive or negative.
 * Description: checks value for + or - or 0.
 * @n: n is the number being checked.
 * Return: returns 1 for positive, 0 for 0, and -1 for negative.
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
