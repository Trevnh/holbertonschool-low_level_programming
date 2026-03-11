#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - struct for helping with printing
 *
 * @format: format of input to print
 * @print: function pointer to printing function
 */
typedef struct printer
{
	char *format;
	void (*print)(va_list arg);
} printer_t;

/*
 * Functions
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
