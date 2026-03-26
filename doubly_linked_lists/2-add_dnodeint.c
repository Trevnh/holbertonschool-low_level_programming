#include "lists.h"

/**
 * add_dnodeint - Add a new node to the head of the linked list
 * @head: Pointer to head of linked list
 * @n: Integer to add to node
 *
 * Return: Address of new node or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
