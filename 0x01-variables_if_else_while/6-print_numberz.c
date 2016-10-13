#include <stdio.h>

/**
 *main - print 0 to 9
 *Description: prints all base10 charaters.
 *header section: test 22
 *Return: returns 0
 */

int main(void)
{
	int a = '0';
	int b = 0;

	while (b < 10)
	{
		putchar(a);
		a++;
		b++;
	}

	putchar('\n');
	return (0);
}
