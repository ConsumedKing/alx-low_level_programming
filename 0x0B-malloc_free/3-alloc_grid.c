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
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mat[i] = calloc(width, sizeof(int));
		if (mat[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(mat[j]);
			}
			free(mat);
			return (NULL);
		}

	}

	return (mat);
}
