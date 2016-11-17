#include "3-calc.h"
#include <stdlib.h>
/**
 * main - makes sure arguments are correct and calls a func
 * @argc: number of arguments
 * @argv: array of arguments
 * return: returns end result of arguments or 98-100 if error.
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
		return(98);
	}
	if (p == NULL)
	{
		printf("Error\n");
		return(99);
	}
	if ((*argc[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return(100);
	}
	prinft("%d\n", p(num1, num1));
	return (0);
}
