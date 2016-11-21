#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - main file.
 * Description: custome printf
 * @format: add here
 * Return: returns number of charaters minus the \0
 */
int _printf(const char *format, ...)
{
	op_f ops[] = {
	{"c", print_c},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{"%", print_percent},
	{NULL, NULL}
	}

	unsigned int count, count2;
	va_list add;
	char *p;

	count = 0;
	va_start(add, format);
	while (format != NULL && format[count] != '\0')
	{
		count2 = 0;
		
		if (format[count] == '%')
		{
			count++;
			while (*ops[count2].op != NULL)
			{
				if (format[count] == (*ops[count2].op))
				{
					ops[count2].f(add);
				}
				count2++;
			}
		}
		else
		{
			_putchar(format[count];
		}
		count++;
	}
	va_end(add);
	printf("\n");	
}
