#include "main.h"
#include "string.h"
/**
 * _strcmp - concatinating strings
 * Descreption: compares string if s1 return positive if
 * s2 return negative if equal return 0
 * @s1: pointer to char(s) aka string
 * @s2: pointer to char(s) aka string (source)
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
