#include "main.h"
/**
 * _strcpy - Copies the string pointed by src to dest
 * @dest: string
 * @src: string
 *
 * Return: Return the value of src to the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
