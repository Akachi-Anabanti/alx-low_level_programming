#include "main.h"
#include <string.h>

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
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd  = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	if (write(fd, text_content, strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);
	return (1);

}
