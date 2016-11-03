#include "holberton.h"
/**
 * _strlen_recursion - prints a string in reverse.
 * Description: prints a string one char at a time backwards.
 * @s: string to be printed.
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * palin_checker - checks to see if a number is prime.
 * @s: the string to be checked.
 * @length: the legnth of s.
 * @count: counter.
 * Return: returns 0 if prime, otherwise 1.
 */
int palin_checker(char *s, int length, int count)
{
	if (count > length / 2)
		return (1);
	if (*(s + count) == *(s + length - count))
		return (palin_checker(s, length, count + 1));
	else
		return (0);
}
/**
 * is_palindrome - main func to see if the word rev is the same.
 * @s: the string to be checked.
 * Return: returns 1 if palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s) - 1;
	return (palin_checker(s, length, 0));
}
