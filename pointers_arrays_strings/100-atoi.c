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
	int j = 1;
	int k;
	int neg = 0;
	int start = -1;
	int end = -1;
	int retval = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			neg++;
		}
		if ((start == -1) && (((s[i] >= '0') && (s[i] <= '9'))))
		{
			start = i;
		}
		if ((start != -1) && (((s[i] < '0') || (s[i] > '9'))))
		{
			end = i - 1;
			break;
		}
		i++;
	}
	if (end == -1 && start != -1)
	{
		end = i - 1;
	}
	for (k = end; k >= start; k--)
	{
		retval = retval + ((s[k] % 48) * j);
		j = j * 10;
	}

	if (neg % 2 == 1)
	{
		retval = retval * -1;
	}
	return (retval);
}
