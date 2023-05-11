#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: name of the file
 * @letters: Number of letters it should print
 * Return: The actual number od letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t i;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(letters);

	if (buff == NULL)
		return (0);

	i = read(fd, buff, letters);
	if (write(STDOUT_FILENO, buff, i) == -1)
		return (0);
	letters =  i;
	close(fd);
	free(buff);
	return (letters);
}
