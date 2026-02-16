#include "main.h"
/**
 * _isupper - Determines if the character given
 * is upper case or not.
 * @c:integer or character that gets converted
 *
 * Return: 1 if character is upper case,
 * 0 if it is not upper case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
