#include "main.h"
/**
 * _memcpy - copy content of memory from src to dest for a number of n bytes
 * @src: source.
 * @dest: destination.
 * @n: number of bytes.
 * Return: the pointer to the encoded string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
