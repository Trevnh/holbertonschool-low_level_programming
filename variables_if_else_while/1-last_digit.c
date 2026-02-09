#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number and prints info about the last digit.
 *
 * Return: Always 0 (Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and ", n, n % 10);
	if (n % 10 > 5)
		printf("is greater than 5\n");
	else if (n % 10 == 0)
		printf("is 0\n");
	else
		printf("is less than 6 and not 0\n");
	return (0);
}
