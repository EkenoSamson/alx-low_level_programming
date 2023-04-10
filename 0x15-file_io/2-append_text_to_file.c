#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of the file.
 *
 * @filename: name of the file
 * @text_content: NULL terminated string.
 *
 * Return: 1 on succes or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int wr;
	int app = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		if (open(filename, O_CREAT | O_EXCL) == -1)
			return (1);
		if (open(filename, O_CREAT | O_EXCL) != -1 ||
				open(filename, O_RDONLY, 0))
			return (-1);
	}

	op = open(filename, O_WRONLY | O_APPEND | O_CREAT | O_EXCL );

	if (op == -1)
	{
		close(op);
		return (-1);
	}

	if (text_content)
	{
		while (text_content[app])
			app++;
	}
	wr = write(op, text_content, app);

	if (wr == -1 || wr != op)
	{
		close(op);
		return (-1);
	}
	close(op);

	return (1);
}
