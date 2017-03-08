#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * Description: and that initializes it with a specific char.
 * @size: size of the array.
 * @c: the array.
 * Return: returns the pointer or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *a;

	a = malloc((size + 1) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < size)
	{
		a[count] = c;
		count++;
	}
	a[count] = '\0';
	return (a);
}
