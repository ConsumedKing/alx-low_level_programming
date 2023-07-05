#include "main.h"
/**
 * _strlen_recursion - print str lenght using recursive function
 * @s: the string (array chars)
 * Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
