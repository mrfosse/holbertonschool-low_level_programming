#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters.
 * @n: arguments.
 * Return: sum of all the args.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total;
	va_list add;

	total = 0;

	if (n == 0)
		return (0);

	va_start(add, n);
	for (i = 0; i < n; i++)
		total += va_arg(add, int);

	va_end(add);
	return (total);
}
