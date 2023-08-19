#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program prints the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
