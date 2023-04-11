#include "main.h"

/**
 * main - entry point.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int f_f, f_t, rd, wr, f, t;
	char *bf;

	bf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_f = open(argv[1], O_RDONLY);
	f_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rd = read(f_f, bf, 1024);

	do {
		if (f_f == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bf);
			exit(98);
		}
		wr = write(f_t, bf, rd);
		if (f_t == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bf);
			exit(99);
		}
		rd = read(f_f, bf, 1024);
		f_t = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(bf);
	f = close(f_f);
	t = close(f_t);

	if (f == -1 || t == -1)
	{
		if (f < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		if (t < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_t);
		exit(100);
	}

	return (0);
}
