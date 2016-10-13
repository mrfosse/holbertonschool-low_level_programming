#include <stdio.h>

/**
 *main - print alphabet
 *Description: prints the alphabet with only two putschar
 *header section: test 22
 *Return: returns 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
