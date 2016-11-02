#include "holberton.h"
/**
 * _strlen_recursion - prints a string in reverse.
 * Description: prints a string one char at a time backwards.
 * @s: string to be printed.
 * Return: returns none.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(s + '0');
		_strlen_recursion(s + 1);
	}
}
