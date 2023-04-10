#include "main.h"

/**
 * read_textfile - A function that read a text file and print it to the stdout
 *
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: print the text and no. of the text
 *	or 0 if the file cannot be opened or read
 *	or 0 if filename is NULL
 *	or 0 if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op;
	int rd;
	int wr;
	char *bf;

	bf = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		free(bf);
		return (0);
	}
	op = open(filename, O_RDONLY);

	if (op == -1)
	{
		free(bf);
		return (0);
	}
	rd = read(op, bf, letters);

	if (rd == -1)
	{
		free(bf);
		return (0);
	}
	wr = write(STDOUT_FILENO, bf, rd);

	if (wr == -1 || wr != rd)
	{
		free(bf);
		return (0);
	}
	free(bf);
	close(op);
	return (wr);
}
