#include "main.h"
/**
 * _strlen - Get the length of s as an int
 * and return the value
 * @s: char pointer
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
