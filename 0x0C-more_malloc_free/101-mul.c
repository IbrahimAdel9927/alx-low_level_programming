#include "main.h"

/**
 * _puts - print a string
 *
 * @str: the inpur
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert s to i
 *
 * @s: the input
 *
 * Return: int
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstnum, i;

	for (firstnum = 0; !(s[firstnum] >= 48 && s[firstnum] <= 57); firstnum++)
	{
		if (s[firstnum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}
	return (sign * resp);
}

/**
 * print_int - print int
 *
 * @n: the input
 *
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int d = 1, i, resp;

	for (i = 0; n / d > 9; i++, d *= 10)
		;
	for (; d >= 1; n %= d, d /= 10)
	{
		resp = n / d;
		_putchar('0' + resp);
	}
}

/**
 * main * Entry point
 *
 * @argc: first input
 * @argv: secondinput
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
