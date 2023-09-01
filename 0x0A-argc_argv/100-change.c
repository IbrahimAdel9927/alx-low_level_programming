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
	if (a == 2)
	{
		int i, x = 0, y = atoi(b[1]);

		int z[] = {25, 10, 5, 2, 1};

		for (i = 0 ; i < 5 ; i++)
		{
			if (y >= z[i])
			{
				x += y / z[i];
				y = y % z[i];
				if (y % z[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
