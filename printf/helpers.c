#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _fputs - prints a string without null byte
 * Descritpion: prints a string to stdout
 * @str: string to be printed.
 * Return: returns none.
 */
void _fputs(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
}
/**
 * _strlen - measures the length of a string.
 * Descritpion: measures the string s.
 * @s: string to be messured/
 * Return: returns length of s.
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);

}
/**
 * _isdigit- checks for to see if _char is a digit.
 * Description: checks to see if 1 though 9.
 * @c: _char to be checked
 * Return: returns 1 if capital, otherwise 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1. 
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * print_c- helper that prints a charater.
 *
 * @c: an int
 * @s: separator
 * Return: none.
 */
void print_c(va_list c, char *s)
{
        va_arg(c, int));
}
/**
 * print_int - helper that prints an int.
 *
 * @c: int
 * @s: separator
 * Return: none.
 */
void print_int(va_list c, char *s)
{
        printf("%s%d", s, va_arg(c, int));
}
/**
 * print_float - helper that prints a float.
 *
 * @c: a double.
 * @s: separator.
 * Return: none.
 */
void print_float(va_list c, char *s)
{
        printf("%s%f", s, va_arg(c, double));
}
/**
 * print_string - helper prints a string.
 *
 * @c: pointer to string
 * @s: separator.
 * Return: none.
 */
void print_string(va_list c, char *s)
{
        char *p;

        p = va_arg(c, char *);
        if (p == NULL)
                p = "(nil)";
        printf("%s%s", s, p);
}
