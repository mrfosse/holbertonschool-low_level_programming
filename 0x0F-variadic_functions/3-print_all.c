#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_c- helper that prints a charater.
 *
 * @c: an int
 * @s: separator
 * Return: none.
 */
void print_c(va_list c, char *s)
{
	printf("%s%c", s, va_arg(c, int));
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
/**
 * print_all - main that prints any parameters using helpers funcs.
 *
 * @format: determines which func to use for formatting.
 * Return: none.
 */
void print_all(const char * const format, ...)
{
	op_f ops[] = {
	{"c", print_c},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};

	unsigned int count, count2;
	va_list add;
	char *p;

	count = 0;
	p = "";
	va_start(add, format);
	while (format != NULL && format[count] != '\0')
	{
		count2 = 0;
		while (count2 < 4)
		{
			if (format[count] == (*ops[count2].op))
			{
				ops[count2].f(add, p);
				p = (", ");
			}
			count2++;
		}
		count++;
	}
	va_end(add);
	printf("\n");
}
