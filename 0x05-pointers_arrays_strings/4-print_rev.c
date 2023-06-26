#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse then newline
 * Descreption: print string in reverse then newline
 * @s: your typical string
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int size;

	size = _strlen(s) - 1;
	while (size >= 0)
	{
		putchar(s[size]);
		size--;
	}
	putchar('\n');
}
