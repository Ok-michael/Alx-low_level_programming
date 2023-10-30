#include "main.h"
/**
 * read_textfile - reads a text file & prints to POSIX stdout
 * @filename: represents the file to be read
 * @letters: the number of letters to read and write.
 * Return: it returns an integer representing the number of
 * characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t nchar;
	int file;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	nchar = read(file, text, sizeof(char) * letters);
	if (nchar == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	nchar = write(STDOUT_FILENO, text, nchar);
	if (nchar == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (nchar);
}
