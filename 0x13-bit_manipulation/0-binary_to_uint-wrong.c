#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - coppies string and makes it an int.
 * Descritpion: coppies the string into an int
 * @s: string to copy
 * Return: returns string as an int.
 */
int _atoi(char *s)
{
	unsigned int count, sign, num;

	count = 0;
	sign = 1;
	num = 0;

	while ((s[count] < '0' || s[count] > '9') && (s[count] != '\0'))
	{
		if (s[count] == '-')
		{
			sign = sign * -1;
		}
		count++;
	}
	while (s[count] != '\0' && s[count] >= '0' && s[count] <= '9')
	{
		num = num * 10 - (s[count] - '0');
		count++;
	}
	sign = sign * -1;
	return (num * sign);
}
/**
 * _pow - returns the results of a to the power of b.
 *
 * @a: the number to be mulitplied 
 * @b: the number of times to multiply a to itself.
 * Return: retuns the result
 */
int _pow(int a, int b)
{
	int count, res;
	
	count = 0;
	res = 1;
	while (count < b)
	{
		res = a * res;
		count++;
	}
	return (res);
}
/**
 * binary_to_uint - converts binart to unsigned int.
 *
 * @b: string to convert.
 * Return: returns converted number or 0 if one or more char in string
 * is not a 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int count, dec_num, remainder;
	unsigned int number;
	char *p;

	p = strdup(b);
	if (p == NULL)
		return (0);

	count = 0;
	while (p[count] != '\0')
	{
		if (p[count] != '0' && p[count] != '1')
			return (0);
		count++;
	}
	
	count = 0;
	number = _atoi(p);

	while (number != 0)
	{
		remainder = number % 10;
		number = number / 10;
		dec_num = dec_num + remainder * _pow(2,count);
		++count;
	}
	return (dec_num);
}
