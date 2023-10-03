#include "main.h"

/**
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output.
 *
 * @filename: first input
 * @letters: second input
 *
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t bs;
	char b[R_B_S * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bs = read(f, &b[0], letters);
	bs = write(STDOUT_FILENO, &b[0], bs);
	close(f);
	return (bs);
}
