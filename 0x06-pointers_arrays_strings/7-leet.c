#include "main.h"
/**
 * leet - encodes function to 1337
 * @str: input string.
 * Return: the pointer to the encoded string.
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char *cap = "AEOTL";
	char *sml = "aeotl";
	char *num = "43071";

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == cap[j] || str[i] == sml[j])
			{
				str[i] = num[j];
			}
		}
		i++;
	}

	return (str);
}
