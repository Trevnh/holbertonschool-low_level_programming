#include "main.h"
/**
 * _strncat - Function that concatenates two strings
 * Append the src string to the dest string.
 * Limit of n bytes.
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: Return the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}
	if (n < j)
	{
		j = n;
	}
	for (k = 0; k < j; k++)
	{
		dest[i] = src[k];
		i++;
	}
	return (dest);
}
