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
	temp = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	count = count - 1;
	while (count > countd)
	{
		temp = s[countd];
		s[countd] = s[count];
		s[count] = temp;

		countd++;
		count--;
	}
}
