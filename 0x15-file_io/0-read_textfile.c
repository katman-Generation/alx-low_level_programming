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

	if (filename == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	s = read(fd, buf, letters);
	if (s < 0)
	{
		free(buf);
		return (0);
	}
	buf[s] = '\0';

	close(fd);

	t = write(STDOUT_FILENO, buf, s);
	if (n < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (n);
}
