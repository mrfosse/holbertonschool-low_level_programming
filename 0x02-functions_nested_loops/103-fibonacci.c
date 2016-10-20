#include <stdio.h>

/**
 * main - finds all even fibonacci numbers
 * Description: finds all even and prints the sum.
 * Return: Returns 0.
 */

int main(void)
{
	int a, b, x, sum1, finalsum;

	a = 0;
	b = 1;
	x = 0;
	sum1 = 0;
	finalsum = 0;

	while (x < 33)
	{
		sum1 = a + b;
		a = b;
		b = sum1;

		if (sum1 % 2 == 0)
		{
			finalsum = finalsum + sum1;
		}
		x++;
	}
	printf("%d\n", finalsum);
	return (0);
}
