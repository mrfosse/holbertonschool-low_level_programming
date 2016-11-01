#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets point 1 to point2.
 * Description: sets the value of a pointer to a char.
 * @s: char
 * @to: char to set it to.
 * Return: returns none.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
