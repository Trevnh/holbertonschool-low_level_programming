#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints character
 * @arg: char to be printed
 */

void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_integer - prints integer
 * @arg: integer to be printed
 */

void print_integer(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * print_float - prints float
 * @arg: float to be printed
 */

void print_float(va_list arg)
{
	double n;

	n = va_arg(arg, double);
	printf("%f", n);
}
/**
 * print_string - print string
 * @arg: string to be printed
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints n arguments separated by separator
 * @format: string to show format of arguments to print
 * @...: variable number of parameters to print
 *
 * Return:
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	int i, j = 0;
	printer_t printer[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};


	va_start(ap, format);

	while (*format && format[j])
	{
		i = 0;

		while ((i < 4) && (*(format + j) != *(printer[i].format)))
		{
			i++;
		}
		if (i < 4)
		{
			printf("%s", separator);
			printer[i].print(ap);
			separator = ", ";
		}
		j++;
	}

	printf("\n");
	va_end(ap);
}
