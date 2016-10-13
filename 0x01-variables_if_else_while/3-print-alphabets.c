#include <stdio.h>

/**
 *main - print alphabet
 *Description: prints the alphabet lower case and upper.
 *header section: test 22
 *Return: returns 0
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
