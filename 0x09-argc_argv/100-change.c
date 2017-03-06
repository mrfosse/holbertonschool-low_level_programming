#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min # of coins to make change for an amount of money.
 * @argc: number of arugments
 * @argv: value of argument.
 * Return: returns the total or error.
 */
int main(int argc, char *argv[])
{
	int number, count;

	count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]) * 100;
	while (number > 0)
	{
		if (number >= 25)
			number = number - 25;
		else if (number >= 10)
			number = number - 10;
		else if (number >= 5)
			number = number - 5;
		else if (number >= 2)
			number = number - 2;
		else
			number = number - 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
