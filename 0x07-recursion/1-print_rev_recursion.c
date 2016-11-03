#include "holberton.h"
/**
 * _print_rev_recursion - prints a string backwards.
 * Description: prints a string one char at a time in rev
 * @s: string to be printed.
 * Return: returns none.
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
