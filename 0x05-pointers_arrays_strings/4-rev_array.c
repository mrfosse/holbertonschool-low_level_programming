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
	int count2, tmp;

	count2 = 0;
	tmp = 0;

	while (count2 < (n - 1))
	{
		tmp = a[n - 1];
		a[n - 1] = a[count2];
		a[count2] = tmp;

		count2++;
		n--;
	}

}
