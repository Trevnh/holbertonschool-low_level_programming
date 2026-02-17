#include "main.h"
/**
 * cap_string - Capitalise all words of a string
 * Separators of words are space, tabulation, new line,
 * comma, semicolon, period, exclamation mark, question mark,
 * quotation mark, (, ), { and }.
 * @s: string
 *
 * Return: New string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char sep[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
		i++;
	}
	if ((s[0] >= 'a') && (s[0] <= 'z'))
	{
		s[0] = s[0] - 32;
	}
	return (s);
}
