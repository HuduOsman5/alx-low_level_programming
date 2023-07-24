#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, sum, random_char;
    char password[84];

    srand(time(0));

    sum = 0;
    i = 0;

    while (sum < 2772)
    {
        random_char = rand() % 94 + 33;
        password[i] = (char)random_char;
        sum += random_char;
        i++;
    }

    password[i] = (char)(2772 - sum);
    i++;

    password[i] = '\0';

    printf("%s\n", password);

    return (0);
}
