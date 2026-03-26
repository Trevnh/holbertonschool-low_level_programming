#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in the linked list
 * @h: pointer to the head of list of ints
 *
 * Return: Number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
