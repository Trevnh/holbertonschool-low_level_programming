#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - uses name to input into the f function
 * @name: string of a name
 * @f: function to print name
 *
 * Return:
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
