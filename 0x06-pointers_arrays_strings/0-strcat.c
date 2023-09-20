#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "main.h"

int main(void) {
    int n = 5;
    int array[10];
    int i = 3;

    // Access a valid index within the bounds of the array
    array[n - 1] = i;

    return 0;
}

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
        int i;
        int j;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }

        dest[i] = '\0';
        return (dest);
}
