#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 * @filename: name of the file
 * @letters: The number of letters that should be read and printed
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, nchar, ncharW;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd  = open(filename, O_RDONLY);
	nchar = read(fd, buff, letters);
	ncharW = write(STDOUT_FILENO, buff, nchar);

	if (fd == -1 || nchar == -1 || ncharW == -1
			|| ncharw != nchar)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (ncharW);
}
