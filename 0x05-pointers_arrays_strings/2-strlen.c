#include "main.h"
/**
 * _strlen - return len of str
 * Descreption: return len of str
 * @s: array of chars
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
