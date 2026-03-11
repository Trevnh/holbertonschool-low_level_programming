#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - iterates through the array given and applies action
 * function to it
 * @array: array of integers
 * @size: size of the array
 * @action: function used on array
 *
 * Return:
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
