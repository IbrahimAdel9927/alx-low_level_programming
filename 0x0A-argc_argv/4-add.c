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
	int i = 0;
	char *c;

	while (--a)
	{
		for (c = b[a] ; *c ; c++)
		{
			if (*c < '0' || *c > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		i += atoi(b[a]);
	}
	printf("%d\n", i);
	return (0);
}
