#include <stdio.h>

/**
 * main - Prints the Fibonacci sequence up to 1024.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, fibonacci_limit = 1024;
    long int first = 0, second = 1, next;

    printf("%ld, %ld", first, second);

    for (i = 2; i < fibonacci_limit; i++)
    {
        next = first + second;
        if (next > fibonacci_limit)
            break;

        printf(", %ld", next);

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
