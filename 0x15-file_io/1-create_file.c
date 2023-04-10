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
	int content;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_RDONLY | O_CREAT | O_TRUNC, 0600);

	if (op == -1)
		return (-1);

	for (content = 0;text_content[content];)
		content++;
	if (text_content == NULL)
		wr = write(op, text_content, 0);
	else
		wr = write(op, text_content, content);

	if (wr == -1)
		return (-1);
	
	return (1);
}

