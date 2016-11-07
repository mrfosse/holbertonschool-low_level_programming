#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of arugments
 * @argv: value of argument.
 * Return: returns the total or error.
 */
int main(int argc, char *argv[])
{
	int temp, count;

	temp = 0;
	count = 1;

	while (count < argc)
	{
		if (!atoi(argv[count]))
		{
			printf("Error\n");
			return (1);
		}
		temp = temp + atoi(argv[count]);
		count++;
	}
	printf("%d\n", temp);
	return (0);
}
