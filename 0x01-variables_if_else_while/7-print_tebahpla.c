#include <stdio.h>

/**
 *main - print alphabet
 *Description: prints the alphabet lower case and upper.
 *header section: test 22
 *Return: returns 0
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
