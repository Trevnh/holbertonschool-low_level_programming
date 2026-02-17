#include "main.h"
/**
 * reverse_array - Reverse an array
 * @a: array
 * @n: number of elements in array
 *
 * Return
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int rev[512];

	for (i = n - 1; i >= 0; i--)
	{
		rev[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = rev[i];
	}
}
