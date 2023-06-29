#include "main.h"
#include "string.h"
/**
 * reverse_array - reverse array of ints
 * Descreption: reverse array of ints
 * @a: pointer to array of integers
 * @n: number of elements
 * Return: 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, swap;

	while (i < j)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		i++;
		j--;
	}
}
