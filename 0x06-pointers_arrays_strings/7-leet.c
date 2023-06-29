#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char *cap = "AEOTL";
	char *sml = "aeotl";
	char *num = "43071"; 

	while (str[i] != '\0')
	{
		for (j = 0;j < 5; j++)
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
