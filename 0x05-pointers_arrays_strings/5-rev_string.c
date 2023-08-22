#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: the input
*/

void rev_string(char *s)
{
	int i = 0;

	int k;

	while (s[i])
	{
		i++;
	}
	char a;

	for (k = 0 ; k < (i / 2); k++)
	{
		a = s[k];
		s[k] = s[i - k - 1];
		s[i - k - 1] = a;
	}
}
