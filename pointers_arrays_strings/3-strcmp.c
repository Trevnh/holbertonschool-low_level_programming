#include "main.h"
/**
 * _strcmp - Compares strings s1 and s2 returning the
 * ASCII value of s1[i] - s2[i]. If string is all the
 * same Return 0
 * @s1: string
 * @s2: string
 *
 * Return: The value of mismatched s1 - s2 or 0 if the same.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	if (diff == 0)
	{
		if (s1[i] != s2[i])
			{
				diff = (s1[i] - s2[i]);
			}
	}
	return (diff);
}
