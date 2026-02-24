#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, multiplies 2 numbers given in argv and prints the
 * result followed by a new line. If 2 arguments are not given print
 * Error follwed by a new line and return 1
 * @argc: length of argv
 * @argv: array of strings of arguments given
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
