#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects the proper function
 *
 * @s: operator passed as an argument.
 * Return: returns pointer to the proper function based on operator given.
 */
int (*get_op_func(char *s))(int, int)
{
	int count;
	int (*funcarray[5])(int, int);
	char operation[5] = { '+', '-', '*', '/', '%' };
	funcarray[0] = op_add;
	funcarray[1] = op_sub;
	funcarray[2] = op_mul;
	funcarray[3] = op_div;
	funcarray[4] = op_mod;
	count = 0;

	while (operation[count] != '\0')
	{
		if (s == operation[count])
			return (funcarray[count]);
		count++;
	}
	return (NULL);
}
