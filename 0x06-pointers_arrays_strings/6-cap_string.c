#include "main.h"

/**
 * cap_string - a function that capitalizes all
 * words of a string..
 *
 * @a: the first input
 *
 * Return: string
*/

char *cap_string(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] <= 122 && a[i] >= 97)
			a[i] -= 32;
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
			a[i] -= 32;
		i++;
	}
	return (a);
}
