#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: arry of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, t, n, s;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cd file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((t = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buf, t) != t)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\s", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (t < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read form file %s\n", argv[1]);
		exit(98);
	}
	n = close(fd_r);
	s = close(fd_w);
	if (n < 0 || s < 0)
	{
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (s < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}

