# include "function_pointers.h"
/**
 * print_name - prints name.
 * @name: string to printed.
 * @f: pointer to a function.
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
