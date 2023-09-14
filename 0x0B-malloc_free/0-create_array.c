#include "main.h"
#include <stdlib.h>
/**
 * create_array - make an array of chars
 * @size: number of chars
 * @c: the char to be initialized with
 * Return: a pointer to to the array
*/
char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (int)size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
