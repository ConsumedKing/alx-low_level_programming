#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenation of two strings in memory
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: a pointer to a concatenated string in memory
*/
char *str_concat(char *s1, char *s2)
{
	int i, size;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2) + 1;
	p = (char *) malloc(size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (int) strlen(s1); i++)
	{
		*(p + i) = *(s1 + i);
	}

	for (i = 0; i < size; i++)
	{
		*(p + i + strlen(s1)) = *(s2 + i);
	}

	return (p);
}
