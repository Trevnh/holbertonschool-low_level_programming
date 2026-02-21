#include "main.h"
/**
 * _atoi - Convert a string into an integer
 * If no numbers in string return 0
 * @s: string
 *
 * Return: Integer converted from s, if no numbers in s 0.
 */
int _atoi(char *s)
{
	int i = 0;
	int neg = 0;
	int retval = 0;
	int hasint = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			neg++;
		}
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			hasint = 1;
			while ((s[i] >= '0') && (s[i] <= '9'))
			{
				retval = (retval * 10) + (s[i] - '0');
				i++;
			}
		}
		if (hasint == 1)
		{
			break;
		}
		i++;
	}
	if (neg % 2 == 1)
	{
		retval = retval * -1;
	}
	return (retval);
}
