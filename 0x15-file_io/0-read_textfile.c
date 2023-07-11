#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 * @filename: name of the file
 * @letters: The number of letters that should be read and printed
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nchar, ncharW;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd), free(buff);
		return (0);
	}
	nchar = read(fd, buff, letters);
	if (nchar == -1)
	{
		close(fd), free(buff);
		return (0);
	}
	ncharW = write(STDIN_FILENO, buff, nchar);
	if (ncharW == -1 || (ncharW != nchar))
	{
		close(fd), free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (nchar);
}
