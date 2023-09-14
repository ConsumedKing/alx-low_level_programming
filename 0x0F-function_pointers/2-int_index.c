#include "function_pointers.h"
/**
 * int_index - Return the first element that fails a cmp test
 * @size: size of the array
 * @array: the array of elements
 * @cmp: the function that compaires
 * Return: the index of that element if not -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
