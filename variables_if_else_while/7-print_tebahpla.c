#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * backwards with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
