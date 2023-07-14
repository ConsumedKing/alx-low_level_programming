#include "main.h"
#include <stdlib.h>
/**
 * array_range - array range
 * @min: minimum int
 * @max: maximum int
 * Return: a ranged array
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
