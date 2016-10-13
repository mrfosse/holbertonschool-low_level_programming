#include <stdio.h>

/**
 * main - uses sizeof
 * Description: uses sizeof to show the size of each data type
 * section header: test1
 * Return: returns 0
 */

int main(void)
{
	char a;
	int b;
	long c;
	double d;
	float e;

	printf("Size of a char: %d bytes(s)\n", sizeof(a));
	printf("Size of an int: %d bytes(s)\n", sizeof(b));
	printf("Size of a long int: %d bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(d));
	printf("Size of a float: %d bytes(s)\n", sizeof(e));

	return (0);
}
