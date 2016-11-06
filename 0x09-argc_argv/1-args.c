#include <stdio.h>
/**
 * main - prints the prog name
 * @argc: number of arugments
 * @argv: string to be printed.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	if (argv != '\0')
		printf("%d\n", argc - 1);
	return (0);
}
