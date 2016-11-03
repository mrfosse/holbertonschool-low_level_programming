#include "holberton.h"
/**
 * _checker - checks to see if a number is prime.
 * @n: the number to be checked.
 * @check: the number to check n with.
 * Return: returns 0 if prime, otherwise 1.
 */
int _checker(int n, int check)
{
	if (check <= 1)
		return (1);
	if (n % check == 0)
		return (0);
	return (_checker(n, check - 1));
}
/**
 * is_prime_number - main func to see if num is prime
 * @n: the number to be checked.
 * Return: returns 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	int check;

	if (n <= 1)
	{
		return (0);
	}
	check = n / 2;
	return (_checker(n, check));
}
