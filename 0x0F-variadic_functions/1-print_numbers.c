#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all parameters.
 *
 * @separator: char to separate the arguments.
 * @n: arguments 1 to ....
 * Return: none.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list add;


	va_start(add, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(add, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(add);
}
