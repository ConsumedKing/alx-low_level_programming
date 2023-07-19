#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that iterates over array to perform an action
 * @array: a pointer to array
 * @size: size of array
 * @action: the fucntion that applies the action to the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
	}
}
