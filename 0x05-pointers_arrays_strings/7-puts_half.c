#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 *
 * @str: the input
*/

void puts_half(char *str)
{
	int i;

	while (str[i])
		i++;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
