#include <stdio.h>
#include "main.h"
/**
 * print_array - Print n elements of an array of integers
 * followed by a new line
 * @a: integer array
 * @n: integer number of elements to print
 *
 * Return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
		{
		printf("%d, ", a[i]);
		}
	}
}
