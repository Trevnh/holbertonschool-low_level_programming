#include "main.h"
/**
 * _puts - Print the given string str followed by a new line
 * @str: string
 *
 * Return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
