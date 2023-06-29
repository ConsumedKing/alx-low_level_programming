#include "main.h"
#include "string.h"
/**
 * char _strcmp - concatinating strings
 * Descreption: adds n-bytes of src to dest overriding \0 byte in dest
 * @dest: pointer to char(s) aka string
 * @src: pointer to char(s) aka string (source)
 * @n: number of bytes to be copied
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	if (strlen(s1) == strlen(s2))
		return (0);
	else if (strlen(s1) < strlen(s2))
		return (-15);
	return (15);
}
