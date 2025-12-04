#include "main.h"

/**
 * read_textfile - Reads a text file and prints its content to standard output
 *                 up to a specified number of letters.
 *
 * @filename: The name of the file to read (NULL-terminated string)
 * @letters: The maximum number of bytes (letters) to read and print
 *
 * Return: The actual number of bytes read and printed on success
 *         0 on failure or if any error occurs (invalid filename, memory issue,
 *         read/write error, etc.)
 *
 * Description:
 *     This function opens the specified file in read-only mode, allocates a
 *     buffer to store up to 'letters' characters, reads from the file, and
 *     writes the content to stdout (file descriptor 1). It handles all possible
 *     error cases and frees allocated memory properly.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;                  /* File descriptor returned by open() */
	char *buf;               /* Buffer to store read content */
	ssize_t bytes_read;      /* Number of bytes actually read */
	ssize_t bytes_written;   /* Number of bytes actually written to stdout */

	/* Check if filename is NULL */
	if (filename == NULL)
	{
		return (0);
	}

	/* Allocate buffer to hold up to 'letters' characters */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);      /* malloc failed */
	}

	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);       /* Clean up buffer on failure */
		return (0);      /* open() failed */
	}

	/* Read up to 'letters' bytes from the file into buffer */
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);       /* Clean up on read error */
		close(fd);
		return (0);
	}

	/* Write the read content to standard output */
	bytes_written = write(1, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buf);       /* Ensure cleanup even if write fails */
		close(fd);
		return (0);      /* write failed or partial write */
	}

	/* Clean up: free buffer and close file descriptor */
	free(buf);
	close(fd);

	/* Return the number of bytes successfully read and printed */
	return (bytes_written);
}
