#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and
 * five print FizzBuzz.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i = 1;

	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 15 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", i);
	}
	_putchar('\n');
	return (0);
}
