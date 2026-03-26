#include "lists.h"

/**
 * add_dnodeint_end - Add a new node to the tail of the linked list
 * @head: Pointer to head of linked list
 * @n: Integer to add to node
 *
 * Return: Address of new node or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = new;
		new->prev = tail;
	}

	return (new);
}
