#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;                  /* File descriptor returned by open() */
	char *buf;               /* Buffer to store read content */
	ssize_t r, w;
	/* Check if filename is NULL */
	if (filename == NULL || letters == 0)
		return (0);
	/* Allocate buffer to hold up to 'letters' characters */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);      /* malloc failed */
	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);       /* Clean up buffer on failure */
		return (0);
	}
	r = read(fd, buf, letters);
		if (r == -1)
		{
			free(buf);
			close(fd);
			return (0);
		}
	w = write(STDOUT_FILENO, buf, r);
		if (w == -1)
		{
			free(buf);
			close(fd);
		}
	if (w != r)
	{
		return (0);
	}
	return (w);
}
