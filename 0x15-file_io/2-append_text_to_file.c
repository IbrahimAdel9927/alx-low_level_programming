#include "main.h"

/**
 * _sl - return the length
 *
 * @s: the input
 *
 * Return: int
*/
int _sl(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - a function that creates a file.
 *
 * @filename: first input
 * @text_content: second input
 *
 * Return: int
*/
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bs = 0, ln = _sl(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (ln)
		bs = write(f, text_content, ln);
	close(f);
	return (bs == ln ? 1 : -1);
}
