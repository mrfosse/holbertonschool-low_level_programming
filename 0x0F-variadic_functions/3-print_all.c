#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * get_func - selects the proper function
 * Description: see above
 * @s: operator passed as an argument.
 * Return: returns pointer to the proper function based on operator given.
 */
int (*get_func(char *s))(int, int)
{
	op_f ops[] = {
	{"c", op_char},
	{"i", op_integer},
	{"f", op_float},
	{"s", op_char *},
	{NULL, NULL}
	};

	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
/**
 * print_all - prints any parameters.
 *
 * @separator: char to separate the arguments.
 * @n: number of arguments to print.
 * Return: none.
 */
void print_all(const char * const format, ...);
{
	unsigned int i;
	va_list add;
	char *p;

	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(add, char *);
		if (p == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", p);
		}

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(add);
}
