#include "main.h"

/**
 * main - Entry point
 *
 * Description: A c program print "_putchar"
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char hima[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(hima[a]);
	}
	_putchar('\n');
	return (0);
}
