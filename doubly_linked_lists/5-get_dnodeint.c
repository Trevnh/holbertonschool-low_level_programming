#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the address of the node at index to return
 * @head: Head of linked list
 * @index: index of node to return
 *
 * Return: Address of node at index, if node does not exist return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
