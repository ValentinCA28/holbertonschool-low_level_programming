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

	/* Si filename est NULL, échec */
	if (filename == NULL)
		return (-1);

	/* Ouvrir/créer: écriture seule, tronquer, permissions rw------- (0600) */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* Si text_content est NULL, créer un fichier vide */
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* Calculer la longueur du texte manuellement */
	while (text_content[len])
		len++;

	/* Écrire tout le contenu dans le fichier */
	written = write(fd, text_content, len);
	if (written == -1 || (unsigned int)written != len)
	{
		close(fd);
		return (-1);
	}

	/* Fermer le fichier et retourner succès */
	close(fd);
	return (1);
}
