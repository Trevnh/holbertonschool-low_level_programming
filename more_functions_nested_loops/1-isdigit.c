#include "main.h"
/**
 * _isdigit - Determines if the character given
 * is a digit or not.
 * @c:integer or character that gets converted
 *
 * Return: 1 if character is a digit,
 * 0 if it is not a digit.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
