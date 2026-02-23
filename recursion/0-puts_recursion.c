#include "main.h"
/**
 * _puts_recursion - Prints a string with _putchar and recursion.
 * @s: string
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
