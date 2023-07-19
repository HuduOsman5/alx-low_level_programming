#include "main.h"
#include "stdio.h" // For the putchar declaration

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 */
void print_alphabet_x10(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            putchar(letter); // Use putchar directly
            letter++;
        }
        putchar('\n'); // Use putchar directly
    }
}
