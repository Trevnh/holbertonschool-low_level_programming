#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers from min to max (included)
 * @min: lowest number to include in array
 * @max: highest number to inclde in array
 *
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;
	int j = min;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(4 * (max - min + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = j++;
	}
	return (arr);
}
