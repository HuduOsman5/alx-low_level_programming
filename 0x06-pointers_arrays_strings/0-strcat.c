#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
    char *dest_ptr = dest;

    /* Move 'dest_ptr' to the end of the destination string */
    while (*dest_ptr != '\0')
        dest_ptr++;

    /* Copy characters from 'src' to 'dest' until the null terminator is encountered */
    while (*src != '\0')
    {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    /* Add a terminating null byte to the end of the concatenated string */
    *dest_ptr = '\0';

    return dest;
}
