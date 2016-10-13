#include <stdio.h>

/**
 *main - prints base16 charaters
 *Description: prints all base16 charaters.
 *header section: test 22
 *Return: returns 0
 */

int main(void)
{
	int a = '0';
	int count1 = 0;
	char c = 'a';
	int count2 = 0;

	while (count1 < 10)
	{
		putchar(a);
		a++;
		count1++;
	}
	while (count2 < 6)
	{
		putchar(c);
		c++;
		count2++;
	}
	putchar('\n');
	return (0);
}
