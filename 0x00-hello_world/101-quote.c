#include <stdio,h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: a C program prints by using
 * write(start,const array, the size of the array)
 *
 * Return: always 1 (not success)
*/

int main(void)
{	char first_arr[] =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, first_arr, 59);
	return (1);
}
