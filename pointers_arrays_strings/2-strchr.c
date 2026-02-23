#include "main.h"
/**
 * _strchr - Returns the pointer to the first occurence
 * of character c in string s, or NULL if the character
 * is not found
 * @s: memory area
 * @c: character
 *
 * Return: Returns pointer to first occurence of character c
 * or NULL if it is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
	{
		return ('\0');
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
