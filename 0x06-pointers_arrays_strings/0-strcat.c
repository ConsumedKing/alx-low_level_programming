#include "main.h"
/**
 * char *_strcat- concatinating strings
 * Descreption: adds src to dest overriding \0 byte in dest
 * @dest: pointer to char(s) aka string
 * @src: pointer to char(s) aka string (source)
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);

}
