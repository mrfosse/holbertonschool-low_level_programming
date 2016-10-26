#include "holberton.h"
/**
 * rev_string - reverses the order of a string.
 * Descritpion: makes the value of the string in reverse.
 * @s: string to be printed.
 * Return: returns none.
 */
void rev_string(char *s)
{
	int count, countd, temp;

	count = 0;
	countd = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	_putchar(count);
	_putchar('\n');
	_putchar('\n');

	while (count > countd)
	{
		temp = *s[countd];
		*s[countd] = *s[count];
		*s[count] = temp;

		_putchar(temp);
		_putchar('\n');
		_putchar(s[count]);
		_putchar('\n');
		_putchar(s[countd]);
		_putchar('\n');
		_putchar('\n');

		countd++;
		count--;
		
	}
	
}
