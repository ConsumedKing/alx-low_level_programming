#include "main.h"
#include "string.h"
/**
 * char *_strncpy- concatinating strings
 * Descreption: adds src to dest overriding \0 byte in dest
 * @dest: pointer to char(s) aka string
 * @src: pointer to char(s) aka string (source)
 * @n: maximum number of bytes (chars) to be copied
 * Return: 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int len = strlen(src);

	for (j = 0; j < n; j++)
	{
		if (j > len || src[j] == '\0')
		{
			dest[j] = '\0';
			continue;
		}
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}
