#include "main.h"
/**
 * _strncpy - Copies the string pointed by src to dest
 * for n bytes.
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: Return the value of src to the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
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
	for (k = 0; k < n; k++)
	{
		if (k <= j)
		{
			dest[k] = src[k];
		}
		else if (k > j)
		{
			dest[k] = '\0';
		}
	}
	return (dest);
}
