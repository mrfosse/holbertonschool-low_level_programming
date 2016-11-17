#include "function_pointers.h"
/**
 * int_index - prints a number with a certain func
 *
 * @array: num to be printed.
 * @size: size of the array
 * @cmp: pointer to the function to be used on array.
 * Return: returns the index of the first matching element otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]) != 0)
			return (count);
	}
	count++;
	return (-1);
}
