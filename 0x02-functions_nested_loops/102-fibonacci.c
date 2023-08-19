#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a = 0;

	int b = 1;

	int i, sum;

	for (i = 0; i < 50; i++)
	{
		sum = a + b;

		printf("%lu", sum);

		a = b;
		b = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
