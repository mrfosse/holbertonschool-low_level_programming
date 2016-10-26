#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * Descritpion: a and b swap values.
 * @a: first integer to be swaped.
 * @b: second integer to be swaped.
 * Return: returns none.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
