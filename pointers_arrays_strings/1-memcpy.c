#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @dest: Pointer to the destination memory area.
 * @src:  Pointer to the source memory area.
 * @n:    Number of bytes to copy.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	/* Copier n octets de src vers dest */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]; /* Copier octet par octet */
	}
	/* Retourner le pointeur vers la destination */
	return (dest);
}
