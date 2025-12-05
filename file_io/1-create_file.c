#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Creates a file with rw------- permissions and writes content
 * @filename: Name of the file to create
 * @text_content: NULL terminated string to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	unsigned int len = 0;

	/* filename NULL → failure */
	if (filename == NULL)
		return (-1);

	/* Open: create + truncate + write only, permissions rw------- */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Case text_content == NULL → empty file */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Manual length calculation (no strlen allowed) */
	while (text_content[len])
		len++;

	/* Write the whole content */
	written = write(fd, text_content, len);
	if (written == -1 || (unsigned int)written != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
