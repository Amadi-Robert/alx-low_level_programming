#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - returns a pointer to a 2D array of integees
  * @width: first integer
  * @height: second integer
  * Return: pointer if success otherwise NULL
  */
int **alloc_grid(int width, int height)
{
	int r, c, f, **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (p);
	for (r = 0; r < height; r++)
	{
		p[r] = malloc(width * sizeof(int));
		if (p[r] == NULL)
		{
			for (f = 0; f < r; f++)
			{
				free(p);
				return (NULL);
			}
		}
		for (c = 0; c < width; c++)
			p[r][c] = 0;
	}
	return (p);
}
