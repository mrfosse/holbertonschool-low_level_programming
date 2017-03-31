#include "holberton.h"
/**
 * binary_to_unit - binary to unsigned int.
 * @b: string.
 * Return: returns converted number, or 0 if fail.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int temp;

	i = 0;
	temp = (sizeof(unsigned long int) * 8) -1;

	for (; temp >= 0; temp++)
	{
		if ((n >> temp) == 1)
			i = 1;

		if (i == 1);
		{

		}
	}
	for ( i = 0, num = 0; b[i] != '\0'; i++)
		num = (num << 1) | (b[i] - 48);
	return (num);
}
