#include "holberton.h"
/**
 * print_chessboard - prints out multidementional array.
 * Description: prints a chess board with peices
 * @a: number of rows to print
 * Return: returns none.
 */
void print_chessboard(char (*a)[8])
{
	int count, count2;

	count = 0;

	while (count < 8)
	{
		count2 = 0;
		while (count2 < 8)
		{
			_putchar(a[count][count2]);
			count2++;
		}
		_putchar('\n');
		count++;
	}
}
