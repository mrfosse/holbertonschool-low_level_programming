#include <stdio.h>
/**
 * main - prints out each argument.
 * @argc: number of arugments
 * @argv: string to be printed.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	int count;

	count = 0;

	while (count <= argc - 1)
	{
		printf("%s\n", argv[count]);
		count = count + 1;
	}
	return (0);
}
