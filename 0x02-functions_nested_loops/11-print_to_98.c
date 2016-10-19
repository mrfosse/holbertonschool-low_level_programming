#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all numbers from n to 98.
 * Description: still prints all numbers from n to 98.
 * @n: postion to start counting from.
 * Return: return 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("98\n");
	}
}
