#include "holberton.h"
#include <stdio.h>

/**
 * main - fizz buzz to 100
 * Description: same as above
 * Return: returns none.
 */
void main()
{
	int a;

	a = 1;
	while (a <= 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("Fizzbuzz");
		else if (a % 5 == 0)
			printf("Fizz");
		else if (a % 3 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (!(a == 100))
			printf(" ");
	}
}
