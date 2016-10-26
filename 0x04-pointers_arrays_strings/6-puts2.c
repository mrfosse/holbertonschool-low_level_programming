#include "holberton.h"
/**
 * puts2 - prints every other letter of a string.
 * Descritpion: see above.
 * @str: string to be printed.
 * Return: returns none.
 */
void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
