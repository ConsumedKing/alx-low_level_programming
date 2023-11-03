#include "main.h"
/**
 * *_memset - set memory location to char
 * @s: pointer to the location (target).
 * @b: the car to be set
 * @n: number of bytes to copy
 * Return: the pointer to the encoded string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
