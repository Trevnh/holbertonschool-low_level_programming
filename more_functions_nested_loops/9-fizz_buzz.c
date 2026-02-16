#include <stdio.h>
/**
 * main - Entry point and prints 1 to 100
 * multiples of 3 print Fizz instead
 * multiples of 5 print Buzz instead
 * multiples of 3 and 5 print FizzBuzz instead.
 *
 * Return: 1 Always
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (1);
}
