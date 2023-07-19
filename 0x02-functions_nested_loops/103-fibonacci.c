#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, nextTerm, sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			sum += fib1;

		nextTerm = fib1 + fib2;
		fib1 = fib2;
		fib2 = nextTerm;
	}

	printf("%d\n", sum);

	return (0);
}
