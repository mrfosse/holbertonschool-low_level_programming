#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array plus newline to stdout
 * Descritpion: prints an array to stdout
 * @a: array to be printed.
 * @n: number of elements of the array to be printed.
 * Return: returns none.
 */
void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		printf("%d, ", a[count]);
		count++;
	}
	printf("\n");
}
