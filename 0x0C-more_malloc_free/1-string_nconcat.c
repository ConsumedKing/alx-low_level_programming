#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concate n bytes of two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 * Return: a pointer to the concated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int lenOut, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n > strlen(s2))
		lenOut = strlen(s1) + strlen(s2) + 1;
	else
		lenOut = strlen(s1) + n + 1;

	p = malloc(lenOut);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lenOut - 1; i++)
	{
		if (i < strlen(s1))
			p[i] = s1[i];
		else
			p[i] = s2[i - strlen(s1)];
	}
	p[i] = '\0';

	return (p);
}
