#include "main.h"

/**
 * rev_string - a function that reverses a string. 
 *
 * @s: the input
*/

void rev_string(char *s)
{
	int i = 0;

	char a;

	while (s[i])
	{
		a[i] = s[i];
		i++;
	}
	int k;

	for (k = 1 ;k <= i ;k++)
	{
		s[k - 1] = a[i - k];
	}
}
