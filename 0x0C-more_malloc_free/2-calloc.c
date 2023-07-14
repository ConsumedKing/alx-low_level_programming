#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that mimcks calloc
 * @nmemb: numnber of elements
 * @size: size of each element in bytes
 * Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (int)(size * nmemb); i++)
		p[i] = 0;

	return (p);
}
