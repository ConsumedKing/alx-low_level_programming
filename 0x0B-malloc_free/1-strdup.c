#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - allocate memory to store a strign.
 * @str: pointer to the string.
 * Return: a pointer to the string.
*/
char *_strdup(char *str)
{
	int size;
	char *p;
	int i;

	if (str == NULL)
		return (NULL);

	size = strlen(str) + 1;
	p = (char *) malloc(size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = *(str + i);
	}

	return (p);

}
