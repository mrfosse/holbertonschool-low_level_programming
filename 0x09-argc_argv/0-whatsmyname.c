#include <stdio.h>
/**
 * main - prints the prog name
 * @argc: number of arugments
 * @argv: string to be printed.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
