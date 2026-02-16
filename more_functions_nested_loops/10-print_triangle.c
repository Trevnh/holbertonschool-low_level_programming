#include "main.h"
/**
 * print_triangle - Print # character into a triangle with
 * a height of n
 * @n: integer
 *
 * Return
 */
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < (n - (i + 1)))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
