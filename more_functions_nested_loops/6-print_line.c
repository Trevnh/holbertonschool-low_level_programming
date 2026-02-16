#include "main.h"
/**
 * print_line - Print _ character n number of times
 * @n: integer
 *
 * Return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
