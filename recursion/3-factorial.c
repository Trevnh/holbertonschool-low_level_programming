#include "main.h"
/**
 * factorial - Returns the factorial of n
 * @n: integer
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
