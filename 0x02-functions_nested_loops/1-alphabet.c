#include "holberton.h"

/**
  * main - prints the alphabet
  * Description: prints the alphabet using _putschar
  * Return: Always 0.
  */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);

	}

	_putchar('\n');
}
