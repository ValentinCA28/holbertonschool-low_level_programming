#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file to read
 * @letters: parameter description
  *
 * Return: the actual number of letters it could read and pri
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
char *buffer;

	/* Si filename est NULL, retourner 0 */
	if (filename == NULL)
		return (0);

	/* Ouvrir le fichier en lecture seule */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

/* Allouer un buffer pour stocker le contenu */
buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* Lire letters octets du fichier dans le buffer */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Écrire le contenu lu sur la sortie standard */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Libérer le buffer et fermer le fichier */
	free(buffer);
	close(fd);
	/* Retourner le nombre d'octets écrits */
	return (bytes_written);
}
