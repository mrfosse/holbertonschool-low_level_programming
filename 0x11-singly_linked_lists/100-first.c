#include <stdio.h>
/**
 * first - prints before main executes.
 * Return: none.
 */
void first(void) __attribute__ ((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
