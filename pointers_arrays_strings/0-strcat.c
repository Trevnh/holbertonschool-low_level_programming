#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * Append the src string to the dest string.
 * @dest: string
 * @src: string
 *
 * Return: Return the concatenated string
 */
char *_strcat(char *dest, char *src)
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
	for (k = 0; k < j; k++)
	{
		dest[i] = src[k];
		i++;
	}
	return (dest);
}
