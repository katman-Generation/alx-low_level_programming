#include "main.h"

/**
 * read_textfile - reads a text file and print it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int t, n;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	t = read(fd, buf, letters);
	if (t < 0)
	{
		free(buf);
		return (0);
	}
	buf[t] = '\0';

	close(fd);

	n = write(STDOUT_FILENO, buf, t);

	if (n < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (n);
}
