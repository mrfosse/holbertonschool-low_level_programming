#include <stdio.h>

/**
 * main - prints all multiples of 3 and 5 below 1024
 * Description: prints all multiples of 3.
 * Return: Returns 0.
 */

int main(void)
{
	int a, sum;

	a = 0;
	sum = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) && (a % 5 != 0))
		{
			sum = sum + a;
		}
		else if (a % 5 == 0)
		{
			sum = sum + a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
