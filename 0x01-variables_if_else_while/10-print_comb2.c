#include <stdio.h>

/**
 *main - print 0 to 99
 *Description: prints all 0 to 99 individually with , inbetween.
 *header section: problem 10
 *Return: returns 0
 */

int main(void)
{
	int a = '0';
	int b = '0';
	int count1 = 0;
	int count2 = 0;

	while (count1 < 10)
	{
		b = '0';
		count2 = 0;
		while (count2 < 10)
		{
			putchar(a);
			putchar(b);
			if ((b != '9') || (a != '9'))
			{
				putchar(',');
				putchar(' ');
				b++;
				count2++;
			}
			else
			{
				b++;
				count2++;
			}
		}
		a++;
		count1++;
	}
	putchar('\n');
	return (0);
}
