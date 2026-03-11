#include "3-calc.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int (*f)(int a, int b);
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
