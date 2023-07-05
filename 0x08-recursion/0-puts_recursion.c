#include "main.h"
/**
 * _puts_recursion - prints chars using recursion
 * @s: a Pointer to a array of chars
 * Return: void
*/


void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
