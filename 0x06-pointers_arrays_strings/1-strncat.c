#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most 'n' bytes from 'src'.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to copy from 'src'.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_ptr = dest;
    int dest_len = 0;

    /* Find the length of the destination string */
    while (*dest_ptr != '\0')
    {
        dest_ptr++;
        dest_len++;
    }

    /* Copy at most 'n' bytes from 'src' to the end of 'dest' */
    while (*src != '\0' && n > 0)
    {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
        n--;
    }

    /* Add a null terminator to the end of 'dest' */
    *dest_ptr = '\0';

    return dest;
}
