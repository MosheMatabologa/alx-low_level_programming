/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the destination string `dest`
 */
char *_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;

    // Find the end of the destination string
    while (dest[i] != '\0')
    {
        i++;
    }

    // Append the source string to the destination
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Null-terminate the concatenated string
    dest[i] = '\0';

    return dest;
}
