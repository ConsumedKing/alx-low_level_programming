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
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
