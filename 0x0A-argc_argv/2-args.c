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
	int i = 0;

	while (a--)
	{
		printf("%s\n", b[i]);
		i++;
	}
	return (0);
}
