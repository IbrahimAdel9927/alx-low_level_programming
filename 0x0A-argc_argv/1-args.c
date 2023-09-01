#include <stdio.h>

/**
 * main - entry point
 * @a: first input
 * @b: second input
 *
 * Return: always 0
*/

int main(int a, char *b[] __attribute__((unused)))
{
	printf("%d\n", a - 1);
	return (0);
}
