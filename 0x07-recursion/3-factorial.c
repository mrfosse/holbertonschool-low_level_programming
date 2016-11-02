#include "holberton.h"
/**
 * factorial - returns the factorial of a given num.
 * Description: multiples a number by all the numbers under it.
 * @n: the number to multiply
 * Return: returns the total.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
