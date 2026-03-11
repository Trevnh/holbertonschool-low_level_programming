#include "variadic_functions.h"

/**
 * sum_them_all - sums n amount of numbers given
 * @n: amount of numbers to sum
 * @...: variable number of parameters to sum
 *
 * Return: if n is 0, return 0
 * otherwise return sum total of all n numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int total = 0;


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(ap, int);
	}

	va_end(ap);
	return (total);
}
