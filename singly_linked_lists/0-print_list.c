#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints the strings of given list with the lengths
 * @h: list of strings and their lengths with a pointer to the next element
 *
 * Return: Number of elements printed
 */
size_t print_list(const list_t *h)
{
	size_t elements_printed;

	elements_printed = 0;
	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		elements_printed++;
		h = h->next;
	}
	return (elements_printed);
}
