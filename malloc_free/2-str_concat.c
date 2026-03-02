#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Returns the concatenation of s1 and s2, returns
 * a pointer to the array or NULL if it fails.
 * @s1: first string in concatenation
 * @s2: second string in concatenation
 *
 * Return: Pointer to the array on sucess or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0;
	int j = 0;
	int k = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	arr = malloc(i + j + 1);
	if (!arr)
	{
		return (NULL);
	}
	while (s1[k] != '\0')
	{
		arr[k] = s1[k];
		k++;
	}
	while (s2[k - i] != '\0')
	{
		arr[k] = s2[k - i];
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
