#include <stdio.h>
/**
 * main - Entry point, prints each argument received followed by a new line
 * @argc: length of argv
 * @argv: array of strings of arguments given
 *
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
