#include "holberton.h"
/**
 * is_prime_number - checks to see if a number is prime.
 * @n: the number to be checked.
 * Return: returns 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 10 == 0 || n % 9 == 0 || n % 8 == 0
	|| n % 7  == 0 || n % 6 == 0 || n % 5 == 0 || n % 4 == 0
	|| n % 4 == 0 || n % 3 == 0 || n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
