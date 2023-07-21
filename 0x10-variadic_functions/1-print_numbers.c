#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>
#include "stddef.h"
/**
 * print_numbers - print numbers passed as arguments
 * @separator: separator string
 * @n: number of arguments
 * Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	if (separator == NULL)
		separator = "";

	va_start(args, n);
	for (i = 0; i < (int)n; i++)
	{
		if (i == (int)n - 1)
			printf("%d\n", va_arg(args, int));
		else
		{
			printf("%d%s", va_arg(args, int), separator);
		}
	}
	va_end(args);
}
