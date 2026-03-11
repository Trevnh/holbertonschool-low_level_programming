#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints n numbers separated by separator
 * @separator: string to print between numbers
 * @n: amount of numbers to print
 * @...: variable number of parameters to print
 *
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
