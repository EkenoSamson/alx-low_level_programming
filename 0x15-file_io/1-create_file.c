#include "main.h"

/**
 * create_file - A function that creates a file.
 *
 * @filename: name of the file to be create.
 * @text_content: NULL terminated string.
 *
 * Return: 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int content = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		op = open(filename, O_CREAT, 0600);
	else
		op = open(filename, O_RDONLY | O_TRUNC | O_CREAT, 0600);

	if (op == -1)
		return (-1);

	while (text_content[content])
		content++;
	wr = write(op, text_content, content);

	if (wr == -1)
		return (-1);
	close(op);
	return (1);
}

