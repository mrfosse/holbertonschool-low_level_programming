#include "holberton.h"
/**
 * read_textfile - reads and prints a text file.
 * @filename: file to be read.
 * @letters: number of letters to read.
 * Return: returns the number of letters it actually read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, end, i, check;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = read(fd, buffer, letters);
	if (i == -1)
		return (0);
	if (i > 0)
		check = write(STDOUT_FILENO, buffer, i);
	if (check == -1 || check != i)
		return (0);
	end = close(fd);
	if (end == -1)
		return (0);
	free(buffer);
	return (check);
}
