#include "main.h"
/**
 * _strstr - finds the first occurence of the substring needle in the string
 * haystack. Terminating null bytes (\0) are not compared
 * @haystack: memory area
 * @needle: memory area
 *
 * Return: Returns pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int inside = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0')
			{
				if (haystack[i + j] == needle[j])
				{
					inside = 1;
				}
				else
				{
					inside = 0;
				}
				j++;
			}
			if (inside == 1)
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (0);
}
