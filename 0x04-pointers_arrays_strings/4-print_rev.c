#include "holberton.h"
/**
 * print_rev - prints a string backwards plus newline to stdout
 * Descritpion: prints a string reverse to stdout
 * @s: string to be printed.
 * Return: returns none.
 */
void print_rev(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		_putchar(s[count - 1]);
		count--;
	}
	_putchar('\n');
}
