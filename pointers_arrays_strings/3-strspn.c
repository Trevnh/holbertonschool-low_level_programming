#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * which consists only of bytes from accept
 * @s: memory area
 * @accept: memory area
 *
 * Return: Returns pointer to first occurence of character c
 * or NULL if it is not found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}
		i++;
		if (count != i)
		{
			break;
		}
	}
	return (count);
}
