#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point, Adds the total of all arguments given then prints it.
 * If there is a non number found in an argument print Error followed by a
 * new line
 * @argc: length of argv
 * @argv: array of strings of arguments given
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
