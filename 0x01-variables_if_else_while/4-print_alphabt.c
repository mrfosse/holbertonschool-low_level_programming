#include <stdio.h>

/**
 *main - print alphabet
 *Description: prints the alphabet minus e and q.
 *header section: test 22
 *Return: returns 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if ((a == 'e') || (a == 'q'))
		{
			a++;
		}
		else
		{
			putchar(a);
			a++;
		}
	}

	putchar('\n');
	return (0);
}
