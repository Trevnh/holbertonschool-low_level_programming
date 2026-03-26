#include "lists.h"
/**
 * list_len - Counts the number of elements in given list
 * @h: list of strings and their lengths with a pointer to the next element
 *
 * Return: Number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t element_count;

	element_count = 0;
	while (h)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
