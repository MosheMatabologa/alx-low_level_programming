#include "main.h"

/**
 * _strncat - Concatenate two strings, using at most 'n' bytes from src.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to append from src.
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
