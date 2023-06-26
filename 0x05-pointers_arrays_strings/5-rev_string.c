#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - print string in reverse then newline
 * Descreption: print string in reverse then newline
 * @s: your typical string
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	int i = strlen(s) - 1;
	int j = 0;
	char tmp;

	while (i > j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
}
