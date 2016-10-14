#include <stdio.h>

/**
 *main - print 0 to 99
 *Description: prints all 0 to 99 individually with without duplicate numbers.
 *header section: problem 10
 *Return: returns 0
 */

int main(void)
{
	int a = 0;
	int b, c;
	int n = 1;

	while (a <= 9)
	{
		b = n;
		while (b <= 8)
		{
			c = n + 1;
			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (!((a == 7) && (b == 8 && (c == 9))))
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
		n++;
	}
	putchar('\n');
	return (0);
}
