#include "function_pointers.h"
/**
 * int_index - print a number with a certain function.
 * @array: number to be printed.
 * @size: size of the array.
 * @cmp: pointer to the function.
 * Return: returns the index of first matching element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) != 0)
			return (count);
	}
	return (-1);
}
