#include "holberton.h"
/**
 * _puts_recursion - prints a string.
 * Description: prints a string one char at a time
 * @s: string to be printed.
 * Return: returns none.
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
