#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals in a square matrix
 * of integers
 * @a: memory area of matrix
 * @size: size of the matrix
 *
 * Return
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int fsize = size * size;
	int diag1, diag2;


	for (i = 0; i < fsize; i += size + 1)
	{
		diag1 += a[i];
	}
	for (i = size - 1; i < fsize - 1; i += size - 1)
	{
		diag2 += a[i];
	}
	printf("%d, %d\n", diag1, diag2);
}
