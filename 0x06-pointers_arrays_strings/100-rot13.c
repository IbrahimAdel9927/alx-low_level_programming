#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 *
 * @s: the input
 *
 * Return: encoded string
*/

char *rot13(char *s)
{
	int i;

	char r[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char R[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *S = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == r[i])
			{
				*s = R[i];
				break;
			}
		}
		s++;
	}
	return (S);
}
