#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocate a grid and initialize it to zero
 * @width: width
 * @height: height
 * Return: a pointer to the grid
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **mat;

	if (width < 1 || height < 1)
		return (NULL);

	mat =  malloc(height * sizeof(int *));
	if (mat == NULL)
	{
		free(mat);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(mat[i]);
			free(mat);
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			mat[i][j] = 0;

	return (mat);
}
