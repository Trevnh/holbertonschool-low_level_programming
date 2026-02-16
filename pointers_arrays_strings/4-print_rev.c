#include "main.h"
/**
 * print_rev - Print the given string str in reverse
 * followed by a new line
 * @s: string
 *
 * Return
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
