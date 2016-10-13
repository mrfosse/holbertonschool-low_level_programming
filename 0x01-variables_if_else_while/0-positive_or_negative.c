#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - makes a random number
 *Description: compares random number to zero to see if negative or positive
 *Section header: test2
 *Return: returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", (n));
	}
		else if (n == 0)
	{
		printf("%d is zero\n", (n));
	}
	else
	{
		printf("%d is negative\n", (n));
	}
	return (0);
}
