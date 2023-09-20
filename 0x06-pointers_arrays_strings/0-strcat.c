/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	/* Find the end of the destination string */
	int i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Concatenate the source string to the destination */
	int j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Null-terminate the concatenated string */
	dest[i] = '\0';

	return dest;
}
