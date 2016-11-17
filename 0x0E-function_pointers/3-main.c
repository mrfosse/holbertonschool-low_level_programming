#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - makes sure arguments are correct and calls a func
 * Description: see above.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns end result of arguments or 98-100 if error.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*p)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	p = (get_op_func(argv[2]));

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (p == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", p(num1, num1));
	return (0);
}
