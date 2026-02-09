#include "main.h"
/**
 * print_sign - Prints a + if n is greater than 0
 * Prints a 0 if n is 0
 * Prints a - if n is less than 0
 * @n: integer
 *
 * Return: 1 if n is greater than 0, 0 if n is zero
 * and -1 if n is lower than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
