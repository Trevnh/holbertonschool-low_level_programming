#include <stdio.h>
/**
 * main - Entry point, prints the number of arguments passed to it
 * @argc: length of argv
 * @argv: array of strings of arguments given
 *
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	if (argv)
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
