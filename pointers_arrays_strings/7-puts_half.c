#include "main.h"
/**
 * puts_half - Print the second half of a string
 * If length is odd, print n where n = (length + 1)/2
 * @str: string
 *
 * Return
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	if (i % 2 == 0)
	{
		i = j / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (j + 1) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar(10);
}
