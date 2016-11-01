#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints out the sum of the two diagonals.
 * Description: prints the sum of the X in a square matric
 * @a: the multi-demntional array.
 * @size: the width and height of the square.
 * Return: returns none.
 */
void print_diagsums(int *a, int size)
{
	int count, count2, sum, sum2;

	count = 0;
	count2 = 0;
	sum = 0;
	sum2 = 0;

	while (count < size)
	{
		sum = sum + *(a + count);
		count++;
		a = a + size;
	}
	a = a - size;
	while (count2 < size)
	{
		sum2 = sum2 + *(a + count2);
		count2++;
		a = a - size;
	}
	printf("%d, %d\n", sum, sum2);
}
