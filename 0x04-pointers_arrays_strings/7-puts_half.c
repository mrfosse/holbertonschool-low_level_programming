#include "holberton.h"
/**
 * puts_half - prints the last half of the string.
 * Descritpion: see above.
 * @str: string to be printed.
 * Return: returns none.
 */
void puts_half(char *str)
{
	int count, count2;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		count2 = count / 2;
	}
	else
	{
		count2 = (count + 1) / 2;
	}
	while (count2 < count)
	{
		_putchar(str[count2]);
		count2++;
	}
	_putchar('\n');
}
