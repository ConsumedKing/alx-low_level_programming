#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a fucntion that prints names
 * @name: a string to output
 * @f: a function helper
 * Return: Void Always
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
