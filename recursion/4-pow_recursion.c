#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power if y
 * @x: integer
 * @y: integer
 *
 * Return: Returns x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, --y));
	}
	return (0);
}
