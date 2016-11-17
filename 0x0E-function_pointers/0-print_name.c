#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: string to be printed.
 * @f: pointer to a function.
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
