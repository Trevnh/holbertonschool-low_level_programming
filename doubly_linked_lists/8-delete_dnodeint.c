#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node of a doubly linked list at the
 * given index
 * @head: head of linked list
 * @index: index to delete node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	if (!(*head))
		return (-1);
	if (!index)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	if (index >= i)
		return (-1);
	temp = *head;
	while (temp && temp->next && index > 0)
	{
		index--;
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
