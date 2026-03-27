#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node to a doubly linked list at the given
 * index
 * @h: head of linked list
 * @idx: index to insert node
 * @n: value to give the node
 *
 * Return: Address of new node, NULL if failed or not possible to add at idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = NULL;
	dlistint_t *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	if (idx == i)
		return (add_dnodeint_end(h, n));
	temp = *h;
	while (temp && temp->next && idx > 0)
	{
		idx--;
		temp = temp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp->prev->next = new;
	new->prev = temp->prev;
	temp->prev = new;
	new->next = temp;
	return (new);
}
