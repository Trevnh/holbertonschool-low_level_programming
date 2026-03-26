#include "lists.h"
/**
 * print_dlistint - Prints the integer of each node in given list from the head
 * @h: pointer to the head of list of ints
 *
 * Return: Number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
