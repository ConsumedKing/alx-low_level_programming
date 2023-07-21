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
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
