#include "main.h"

/**
 * append_text_to_file - Creates a file
 * @filename: A pointer to the name of the file
 * @text_content: A pointer to a  string
 *
 * Return: -1 if function fails else 1
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);

	return (1);
}
