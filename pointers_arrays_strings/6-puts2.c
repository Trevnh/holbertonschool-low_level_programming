#include "main.h"
/**
 * puts2 - Print every other character of a string str
 * starting with the first followed by a new line
 * @str: string
 *
 * Return
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
		i++;
	}
	_putchar(10);
}
