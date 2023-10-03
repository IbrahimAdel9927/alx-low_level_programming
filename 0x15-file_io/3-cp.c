#include "main.h"

#define US "Usage: cp file_from file_to\n"
#define ER_NR "Error: Can't read from file %s\n"
#define ER_NW "Error: can't write to %s\n"
#define ER_NC "Error: Can't close f %d\n"
#define PER (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Entry point
 *
 * @ac: first input
 * @av: second input
 *
 * Return: int
*/
int main(int ac, char **av)
{
	int f_f = 0, t_f = 0;
	ssize_t b;
	char bu[R_B_S];

	if (ac != 3)
		dprintf(STDERR_FILENO, US), exit(97);
	f_f = open(av[1], O_RDONLY);
	if (f_f == -1)
		dprintf(STDERR_FILENO, ER_NR, av[1]), exit(98);
	t_f = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PER);
	if (t_f == -1)
		dprintf(STDERR_FILENO, ER_NW, av[2]), exit(99);
	while ((b = read(f_f, bu, R_B_S)) > 0)
		if (write(t_f, bu, b) != b)
			dprintf(STDERR_FILENO, ER_NW, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ER_NR, av[1]), exit(98);
	f_f = close(f_f);
	t_f = close(t_f);
	if (f_f)
		dprintf(STDERR_FILENO, ER_NC, f_f), exit(100);
	if (t_f)
		dprintf(STDERR_FILENO, ER_NC, t_f), exit(100);
	return (EXIT_SUCCESS);
}
