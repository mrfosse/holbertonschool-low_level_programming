#include <stdio.h>

/**
 *main - print 0 to 9
 *Description: prints all 0 to 9 individually with , inbetween.
 *header section: problem 9
 *Return: returns 0
 */

int main(void)
{
	int a = '0';
	int b = 0;

	while (b < 10)
	{
		if (a != '9')
		{
			putchar(a);
			putchar(',');
			putchar(' ');
			a++;
			b++;
		}
		else
		{
			putchar(a);
			a++;
			b++;
		}
	}

	putchar('\n');
	return (0);
}
