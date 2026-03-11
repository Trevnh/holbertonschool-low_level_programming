#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * int_index - iterates through the array given and returns the index when cmp
 * is true
 * @array: array of integers
 * @size: size of the array
 * @cmp: function used on array to see if index should be returned
 *
 * Return: index of successful match else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
