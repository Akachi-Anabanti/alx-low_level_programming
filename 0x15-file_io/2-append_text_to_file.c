#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: Nmae of the file
 * @text_content: content of the text
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL && fd == -1)
		return (-1);
	if (text_content == NULL && fd == 1)
	{
		close(fd);
		return (1);
	}
	if (fd == -1)
		return (-1);
	for (len = 0; text_content[len] != '\0'; len++)
		;
	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);
}
