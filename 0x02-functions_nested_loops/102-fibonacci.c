#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers.
 * Description: see main.
 * Return: Returns 0.
 */

int main(void)
{
	long a, b, x, sum;

	a = 0;
	b = 1;
	x = 0;
	sum = 0;

	printf("%ld, %ld, ", a, b);

	while (x < 50)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%ld", sum);
		if ( x < 49)
		{
			printf(", ");
		}
		x++;
	}
	return (0);
}
