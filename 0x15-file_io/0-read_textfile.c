#include "main.h"
/**
 * read_textfile - this function reads a text file and
 * prints it to the POSIX stdout
 * @filename: this parameter represents the file to be
 * read
 * @letters: this is the number of letters to read and write.
 * Return: it returns an integer representing the number of
 * characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt
	ssize_t n_ltrs;
	int file;

	if (!filename)
		return (0);
	txt = malloc(sizeof(char) * letters + 1);
	if (txt == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(txt);
		return (0);
	}
	n_ltrs = read(file, txt, sizeof(char) * letters);
	if (n_ltrs == -1)
	{
		free(txt);
		close(file);
		return (0);
	}
	n_ltrs = write(STDOUT_FILENO, txt, n_ltrs);
	if (n_ltrs == -1)
	{
		free(txt);
		close(file);
		return (0);
	}
	free(txt);
	close(file);
	return (n_ltrs);
}
