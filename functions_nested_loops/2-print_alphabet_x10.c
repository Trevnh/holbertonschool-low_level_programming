#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet, in lowercase
 * followed by a new line 10 times.
 *
 * Return
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar(10);
	}
}
