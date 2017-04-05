#include "holberton.h"
/**
 * append_text_to_file - writes text at the end.
 * @filename: file name to write to.
 * @text_content: letters to be written.
 * Return: 1 , otherwise -1 on fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, check;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	check = write(fd, text_content, i);
	close(fd);
	if (check == -1)
		return (-1);
	return (1);
}
