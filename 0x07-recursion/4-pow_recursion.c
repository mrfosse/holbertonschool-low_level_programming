#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised by the power y.
 * Description: multiples a number by all the numbers under it.
 * @x: the number to multiplied
 * @y: the number of times to be multiplied.
 * Return: returns the total.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y < 1)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
