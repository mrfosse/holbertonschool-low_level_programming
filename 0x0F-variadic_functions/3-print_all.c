#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * op_char - helper that prints a charater.
 *
 * Return: none.
 */
void op_char(...)
{
	va_list add;
	va_start(add);
	printf("%s", va_arg(add, char *);
	va_end(add);
}
/**
 * op_integer - helper that prints an int.
 *
 * Return: none.
 */
void op_integer(...)
{
	va_list add;
	va_start(add);
	printf("%d", va_arg(add, char *);
	va_end(add);
}
/**
 * op_float - helper that prints a float.
 *
 * Return: none.
 */
void op_float(...)
{
	va_list add;
	va_start(add);
	printf("%f", va_arg(add, char *);
	va_end(add);
}
/**
 * op_string - helper prints a string.
 *
 * Return: none.
 */
void op_string *(...)
{
	va_list add;
	va_start(add, n);
	if ((va_arg(add, char *) == NULL)
		printf("(nill)");
	else
		printf("%s", va_arg(add, char *);
	va_end(add);
}
/**
 * print_all - main that prints any parameters using helpers funcs.
 *
 * Return: none.
 */
void print_all(const char * const format, ...);
{
	op_f ops[] = {
	{"c", op_char},
	{"i", op_integer},
	{"f", op_float},
	{"s", op_string *},
	{NULL, NULL}
	};

	unsigned int i;
	va_list add;
	char *p;
}
