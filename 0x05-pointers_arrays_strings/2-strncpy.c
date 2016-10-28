#include "holberton.h"
/**
 * _strncat - copies a string.
 * Description: copies source to destination
 * @src: string to copy to  dest.
 * @dest: string to be copied to.
 * @n: number of bytes to copy.
 * Return: returns the string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;

	while (dest[count] != '\0' && count <= n)
	{
		dest[count] = src[count];
		count++;
	}
	count++;
	dest[count] = '\0';

	return (dest);
}
