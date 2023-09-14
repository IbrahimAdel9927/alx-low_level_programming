#include <stdio.h>
#include <stdlib.h>

#include "function_pointers.h"

/**
 * main - Entry point
 *
 * @argc: first input
 * @argv: second input
 *
 * Return: always 0
*/

int main(int argc, char **argv)
{
	char *s = (char *)main;
	int x;

	if (argc != 2)
		printf("Error\n"), exit(1);
	x = atoi(argv[1]);
	if (x < 0)
		printf("Error\n"), exit(2);
	while (x--)
	printf("%02hhx%s", *s++, x ? " " : "\n");

	return (0);
}
