#include "main.h"
#include "string.h"
/**
 * string_toupper - make all letter upper in a string
 * Descreption: make all letter upper in a string
 * @str: pointer to array of chars
 * Return: 0 (Success)
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97)
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
