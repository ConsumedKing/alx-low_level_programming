#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - return string in reverse then newline
 * Descreption: return string in reverse then newline
 * @s: your typical string
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	char tmp;
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
