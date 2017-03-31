#include "holberton.h"
/**
 * binary_to_uint - binary to unsigned int.
 * @b: string.
 * Return: returns converted number, or 0 if fail.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0'  && b[i] != '1')
			return (0);
	}
	for (i = 0, num = 0; b[i] != '\0'; i++)
		num = (num << 1) | (b[i] - 48);
	return (num);
}
