#include "main.h"
#include "stdlib.h"
/**
 * malloc_checked - check before reservation
 * @b: Number of Bytes
 * Return: void
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
