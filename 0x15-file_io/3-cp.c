#include "main.h"

#define BUFFER_SIZE 1024

/**
 * file_error - handles file error
 * @op_type: operation type read (1) write (0)
 * @filename: name of file
 */
void file_error(int op_type, char *filename)
{
	switch (op_type)
	{
		case 1:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
			break;
		case 0:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
			break;
	}
}
/**
 * copy_from - copies content from file one to file to
 * @file_from: filename to copy from
 * @file_to: filename to copy to
 */
void copy_from(char *file_from, char *file_to)
{
	int fd1, fd2, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	/*mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH*/

	fd1 = open(file_from, O_RDONLY);/*file_from descriptor*/
	if (fd1 == -1)
		file_error(1, file_from);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);/*file_to descriptor*/
	if (fd2 == -1)
		file_error(0, file_to);
	while ((bytes_read = read(fd1, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
			file_error(0, file_to);
	}
	if (bytes_read == -1)
	{
		close(fd1);
		close(fd2);
		file_error(1, file_from);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	copy_from(file_from, file_to);
	return (0);
}
