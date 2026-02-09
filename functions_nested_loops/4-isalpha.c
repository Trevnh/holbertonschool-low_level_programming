#include "main.h"
/**
 * _isalpha - Checks to see if the character is alphabetic.
 * @c: Character
 *
 * Return: 1 if c is alphabetic, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
