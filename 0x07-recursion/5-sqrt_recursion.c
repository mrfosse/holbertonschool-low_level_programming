#include "holberton.h"
/**
 * _sqrt2 - does most of the work of next func
 * Description: finds the natural square root of a number.
 * @n: the number to be checked.
 * @square: is the base of the square root.
 * Return: returns the square root, otherwise -1.
 */
int _sqrt2(int n, int square)
{

	if (n - square * square == 0)
	{
		return (square);
	}
	else if (n < square * square)
	{
		return (-1);
	}
	else
	{
		return (_sqrt2(n, (square + 1)));
	}
}
/**
 * _sqrt_recursion - returns the square root of n
 * Description: finds the natural square root of a number.
 * @n: the number to be checked.
 * Return: returns the square root, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt2(n, 2));
}
