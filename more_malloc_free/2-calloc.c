#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc of nmemb elements of
 * size bytes each.
 * @nmemb: number of elements in array
 * @size: size of elements in array in bytes
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = '\0';
	}
	return (arr);
}
