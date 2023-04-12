#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - grid of int
 * @width: width
 * @height: height
 * Return: pntr
 */
int **alloc_grid(int width, int height)
{
int **a, b, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}

	for (b = 0; r < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);

		if (a[b] == NULL)
		{
			for (; b >= 0; b--)
			{
				free(a[b]);
			}
			free(a);
			return (NULL);
		}

		for (c = 0; c <= width; c++)
		{
			a[b][c] = 0;
		}
	}
	return (a);

}
