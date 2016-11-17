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
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};

	int i;

	i = 0;
	while (ops[i][1] != NULL)
	{
		if (s == ops[i][1])
			return (ops[i][2]);
		i++;
	}
	return (NULL);
}
