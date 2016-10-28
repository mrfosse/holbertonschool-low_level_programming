#include "holberton.h"
/**
 * reverse_array - copies an array in reverse.
 * Description: copies an array and reverses it.
 * @a: string to copy.
 * @n: number of elements to copy.
 * Return: returns the string dest.
 */
void reverse_array(int *a, int n)
{
	int count, count2, tmp;

	count = 0;
	count2 = 0;
	tmp = 0;
	
	while (a[count] != '\0' && count < n)
	{
		count++;
	}
	while (count2 < count)
	{
		tmp = a[count];
		a[count] = a[count2];
		a[count2] = tmp;

		count2++;
		count--;
	}

}
