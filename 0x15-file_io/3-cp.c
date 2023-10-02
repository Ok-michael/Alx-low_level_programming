#include "main.h"
#include <stdio.h>

void error_file(int file_from, int file_to, char *argv[]);

/**
 * main - this is the entry point of the program
 * @argc: number of arguments passed from the commandline
 * @argv: this is a list of all those arguments passed from
 * the commandline
 *
 * Return: it returns 0 on success
 */
int main(int argc, char *argv[])
{
	int src_file, dst_file, err_close;
	ssize_t n_chars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src_file = open(argv[1], O_RDONLY);
	dst_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(src_file, dst_file, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(src_file, buf, 1024);
		if (n_chars == -1)
			error_file(-1, 0, argv);
		nwr = write(dst_file, buf, n_chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(src_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}

	err_close = close(dst_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}
	return (0);
}

/**
 * error_file - this function checks if files can be opened.
 * @src_file: this is the source
 * @dst_file: this is the destination
 * @argv: arguments vector.
 *
 * Return: this function returns void
 */
void error_file(int src_file, int dst_file, char *argv[])
{
	if (src_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dst_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
