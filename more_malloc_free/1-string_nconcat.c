#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Returns the concatenation of s1 and s2 for n bytes of s2,
 * returns a pointer to the array or NULL if it fails.
 * @s1: first string in concatenation
 * @s2: second string in concatenation
 * @n: bytes of s2 to concatenate
 *
 * Return: Pointer to the array on sucess or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
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
	if (n >= j)
	{
		n = j;
	}
	arr = malloc(i + n + 1);
	if (!arr)
	{
		return (NULL);
	}
	while (s1[k] != '\0')
	{
		arr[k] = s1[k];
		k++;
	}
	while (k - i < n)
	{
		arr[k] = s2[k - i];
		k++;
	}
	arr[k] = '\0';
	return (arr);
}
