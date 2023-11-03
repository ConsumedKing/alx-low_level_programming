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
	int i = 0, diff = 0;

	while (!diff)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
