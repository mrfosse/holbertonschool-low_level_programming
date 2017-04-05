#include "holberton.h"
/**
 * create_file - makes a text file.
 * @filename: file name to make.
 * @test_content: letters to be written.
 * Return: 1 , otherwise -1 on fail.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i, check;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (i > 0)
		check = write(fd, text_content, i);
	if (check == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
