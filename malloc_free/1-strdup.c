#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Duplicates the given string str and returns
 * a pointer to the array or NULL if it fails.
 * @str: string to be duplicated
 *
 * Return: Pointer to the array on sucess or NULL on failure
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0;
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	arr = malloc(i + 1);
	if (!arr)
	{
		return (NULL);
	}
	while (j < i)
	{
		arr[j] = str[j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
