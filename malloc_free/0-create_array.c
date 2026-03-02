#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates an array of size length filled with c and returns
 * a pointer to the array or NULL if it fails.
 * @size: length of array to be made
 * @c: character to input into the array
 *
 * Return: Pointer to the array on sucess or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';
	return (arr);
}
