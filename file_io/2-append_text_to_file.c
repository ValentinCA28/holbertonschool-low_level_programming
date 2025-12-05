#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: size/length parameter
 * @text_content: text_content parameter
 *
 * Description: Uses the following local variables:
 *   - fd: file descriptor
 *   - written: written variable
 *   - len: length of string
 *
 * Return: 1 if the file exists and -1 if the file does not exist or if you do
 * not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		/* Calculer la longueur du texte */
		while (text_content[len])
		{
			len++;
		}

		/* Écrire le texte */
		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
