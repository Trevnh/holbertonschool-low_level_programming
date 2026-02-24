#include "main.h"
/**
 * _sqrt_check - Finds natural sqrt of a number, -1 if it does not exist
 * @n: integer
 * @i: integer
 *
 * Return: Natural square root or -1
 */
int _sqrt_check(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_check(n, ++i));
}
/**
 * _sqrt_recursion - Returns the natural sqrt of n, if it does not exist
 * return -1
 * @n: integer
 *
 * Return: Returns result of _sqrt_check
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_check(n, 1));
}
