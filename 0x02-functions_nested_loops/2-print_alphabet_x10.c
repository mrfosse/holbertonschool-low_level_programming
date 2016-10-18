#include "holberton.h"

/**
  * print_alphabet_x10 - prints the alphabet 10 times
  * Description: prints the alphabet 10 times using _putschar twice
  * Return: none
  */
void print_alphabet_x10(void)
{
	int i;
	int g;

	for (g = 0 ; g < 10; g++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);

		}
		_putchar('\n');
	}
}
