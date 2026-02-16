#include "main.h"
/**
 * print_diagonal - Print \ character n number of times
 * creating a diagonal line in the terminal.
 * @n: integer
 *
 * Return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = i; j >= 0; j--)
			{
				if (j == 0)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
	_putchar('\n');
	}
}
