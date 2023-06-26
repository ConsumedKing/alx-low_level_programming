#include "main.h"
/**
 * swap_int - change a pointer value to int 98
 * Descreption: reset_to_98
 * @a: pointer to a int
 * @b: pointer to a int
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
