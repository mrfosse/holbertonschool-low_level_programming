#include "holberton.h"

/**
 * reset_to_98 - uses a pointer to update an int to 98.
 * Description: take location n and change the value to 98
 * @n: int location who's value is to be changed to 98
 * Return: returns none.
 */
void reset_to_98(int *n)
{
	int value;

	value = 98;
	*n = value;
}
