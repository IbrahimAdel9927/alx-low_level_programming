#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @a: first input
 * @b: second input
 *
 * Return: always 0
*/

int main(int a, char *b[])
{
	int i;

	if (a == 3)
	{
		i = atoi(b[1]) * atoi(b[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
		}
	return (0);
}
