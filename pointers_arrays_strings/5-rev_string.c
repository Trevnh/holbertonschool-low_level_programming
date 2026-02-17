#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: string
 *
 * Return
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k;
	char rev[512];

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (i = k; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	for (i = 0; i <= k; i++)
	{
		s[i] = rev[i];
	}
}
