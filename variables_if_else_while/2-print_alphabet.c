#include <stdio.h>
/**
 * main - prints the alphabet in lowercase with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
