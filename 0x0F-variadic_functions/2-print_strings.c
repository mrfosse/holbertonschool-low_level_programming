#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints all parameters.
 *
 * @separator: char to separate the arguments.
 * @n: number of arguments to print.
 * Return: none.
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
