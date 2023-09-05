#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * @g: first input
 * @h:second input
*/

void free_grid(int **g, int h)
{
	int  a = 0;

	while (a < h)
	{
		free(g[a]);
		a++;
	}
	free(g);
}
