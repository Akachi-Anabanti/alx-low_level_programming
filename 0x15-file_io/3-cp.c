#include "main.h"

#define BUFFER_SIZE 1024

/**
 * file_error - handles file error
 * @op_type: operation type read, write
 * @filename: name of file
 * @code: exit code
 */
void file_error(char *op_type, char *filename, unsigned int code)
{
	dprintf(2, "Error Can't %s from file %s\n", op_type, filename);
	exit(code);
}
/**
 * main - copies content from file one to file to
 * @argv: argument vector
 * @argc: argument count
 * Return: 1 on success else -1
 */
int main(int argc, char **argv)
{
	int fd1, fd2, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);/*file_from descriptor*/
	if (fd1 == -1)
		file_error("read", argv[1], 98);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);/*file_to descriptor*/
	if (fd2 == -1)
		file_error("write", argv[2], 99);
	while ((bytes_read = read(fd1, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
			file_error("write", argv[2], 99);
	}
	if (bytes_read == -1)
		file_error("read", argv[1], 98);
	if (close(fd1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd2);
		exit(100);
	}
	return (1);
}
