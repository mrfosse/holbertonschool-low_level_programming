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
	int hundo;
	int tens;
	int ones;

	for (hundo = 0; hundo < 10 ; hundo++)
	{
		for (tens = 0; tens < 10; tens++)
		{
			for (ones = 0; ones < 10; ones++)
			{
				putchar(hundo + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hundo != tens && hundo < tens && hundo != ones && tens < ones)
				{
					putchar(hundo + '0');
	                                putchar(tens + '0');
        	                        putchar(ones + '0');
					if (ones == 7)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
