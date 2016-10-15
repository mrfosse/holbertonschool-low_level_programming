#include <stdio.h>

/**
 *main - print 000 to 999
 *Description: prints all 000 to 999 individually
 * with without duplicate numbers.
 *header section: problem 11
 *Return: returns 0
 */

int main(void)
{
	int hundo = 0;
	int tens = 0;
	int ones = 0;
	int tenscount = 0;
	int onescount = 0;
	int countcount = 0;

	while (hundo <= 7)
	{
		countcount++;
		tenscount++;
		onescount = countcount;
		tens = tenscount;
		ones = onescount;
		while (tens <= 8)
		{
			onescount++;
			ones = onescount;
			while (ones <= 9)
			{
				putchar(hundo + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (!(hundo + tens + ones == 24))
				{
					putchar(',');
					putchar(' ');
				}
				ones++;
			}
			tens++;
		}
		hundo++;
	}
	putchar('\n');
	return (0);
}
