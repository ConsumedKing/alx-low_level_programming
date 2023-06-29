#include "main.h"
/**
 * char *_strncat- concatinating strings
 * Descreption: adds n-bytes of src to dest overriding \0 byte in dest
 * @dest: pointer to char(s) aka string
 * @src: pointer to char(s) aka string (source)
 * @n: number of bytes to be copied
 * Return: 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);

}
