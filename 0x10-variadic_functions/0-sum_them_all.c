#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all arguments (except for the first one)
 * @n: the number of arguments
 * Return: (int) Sum of all Arguments (Except For The First One)
*/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
