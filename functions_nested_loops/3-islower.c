#include "main.h"
/**
 * _islower - Checks to see if the character is lowercase.
 * @c: Character
 *
 * Return: 1 if c is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
