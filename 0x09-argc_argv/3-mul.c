#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of arugments
 * @argv: string to be printed.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	int temp;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	temp = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", temp);
	return (0);
}
