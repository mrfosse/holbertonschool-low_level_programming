#include "variadic_functions.h"
/**
 * print_numbers - print all parameters.
 * @separator: seperates the args.
 * @n: arguments.
 * Return: none.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int i;
	va_list add;

	va_start(add, n);

	for (i = 0l i < (n - 1); i++)
	{
		printf("%d", va_arg(add, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("d\n", va_arg(add, int));
	va_end(add);
}
