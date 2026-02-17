#include "main.h"
/**
 * leet - Encodes string into 1337.
 * @s: string
 *
 * Return: New string
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char sep[20] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o', '0',
	'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 20; j++)
		{
			if ((s[i] == sep[j]) && ((j % 2) == 0))
			{
				s[i] = sep[j + 1];
			}
		}
		i++;
	}
	return (s);
}
