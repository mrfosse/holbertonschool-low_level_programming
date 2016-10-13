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

	if (n % 10  > 5)
	{
		printf("The last digit of %d is %i and is greater than 5", n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("The last digit of %d is %i and is less than 6 and not 0", n, n % 10);
	}
	else
	{
		printf("The last digit of %d is %i and is 0", n, n % 10);
	}
	return (0);
}
