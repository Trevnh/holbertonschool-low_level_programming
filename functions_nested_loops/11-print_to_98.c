#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers
 * from n to 98, followed by a new line
 * @n: integer
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 99; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else if (n > 98)
	{
		for (; n > 97; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
