#include "holberton.h"

/**
 * create_file - reads a text file and prints to POSIX stdout.
 *
 * @filename: file to be written to.
 * @text_content: text to be written to file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, temp, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	count = 0;
	while (text_content[count] != '\0')
	{
		count++;
	}

	temp = write(fd, text_content, count);
	close(fd);
	if (temp == -1)
		return (-1);
	else
		return (1);
}
