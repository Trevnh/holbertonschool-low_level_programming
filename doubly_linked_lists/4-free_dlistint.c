#include "lists.h"

/**
 * free_dlistint - Frees the linked list given
 * @head: The head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
