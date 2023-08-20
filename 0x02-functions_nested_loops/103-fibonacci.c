#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int a = 1;

	int b = 2;

	int sum = 0;

	while ((a <= 4000000) || (b <= 4000000))
	{
		if ((a % 2 == 0) && (a <= 4000000))
			sum += a;
		if ((b % 2 == 0) && (b <= 4000000))
			sum += b;
		a = a + b;

		b = b + a;
	}
	printf("%d\n", sum);
	return (0);
}
