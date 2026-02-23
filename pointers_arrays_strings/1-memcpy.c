#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area src to
 * memory area dest
 * @src: memory area
 * @dest: memory area
 * @n: integer
 *
 * Return: Returns updated pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
