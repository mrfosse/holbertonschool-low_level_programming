#include "function_pointers.h"
/**
 * array_iterator - prints a number.
 * @array: num to be printed.
 * @size: size of the array.
 * @action: pointer to the function to be used on array.
 * Return: none.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}
