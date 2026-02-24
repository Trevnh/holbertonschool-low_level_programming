#include <stdio.h>
/**
 * main - Entry point, prints the name of the program, if it is renamed should
 * not need to recompile.
 * @argc: length of argv
 * @argv: array of strings of arguments given
 *
 * Return: 0 Always
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
