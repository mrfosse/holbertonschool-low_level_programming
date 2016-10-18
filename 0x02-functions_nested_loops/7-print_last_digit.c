#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * Description: prints the last digit of a num
 * @n: n is the number being checked.
 * Return: returns none.
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		n = n * -1;
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}
}
