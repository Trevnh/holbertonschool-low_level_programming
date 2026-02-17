#include "main.h"
/**
 * string_toupper - Change all lowercase letters in a string to
 * Uppercase
 * @s: string
 *
 * Return: New string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
