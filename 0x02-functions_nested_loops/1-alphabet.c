#include <stdio.h>
#include "main.h"

/**
 * a prodram prints alphabet by useing the _putchar function
 * from "a" to "z"
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
