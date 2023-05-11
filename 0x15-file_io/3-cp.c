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
			dprintf(2, "Error: Can't read from file %s\n", filename);
			exit(98);
			break;
		case 0:
			dprintf(2, "Error: Can't write to %s\n", filename);
			exit(99);
			break;
	}
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
	/*mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH*/

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);/*file_from descriptor*/
	if (fd1 == -1)
		file_error(1, argv[1]);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);/*file_to descriptor*/
	if (fd2 == -1)
		file_error(0, argv[2]);
	while ((bytes_read = read(fd1, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd2, buffer, bytes_read);
		if (bytes_written == -1)
			file_error(0, argv[2]);
	}
	if (bytes_read == -1)
		file_error(1, argv[1]);
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
