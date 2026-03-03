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
	unsigned int len1, len2, i, j;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	arr = malloc(sizeof(char) * (len1 + n + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
