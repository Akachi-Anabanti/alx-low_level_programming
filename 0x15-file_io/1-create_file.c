#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content to write in the file
 * Return: 1 on success, -1 on failures
 * Description: The created file must have those permissions rw--------
 * if the file already exists do not change the permissions
 * if the file already exists, truncate it
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	mode_t mode = S_IRUSR | S_IWUSR;


	if (filename == NULL)
		return (-1);

	fd  = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
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
