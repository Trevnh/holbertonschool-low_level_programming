#include "lists.h"
/**
 * free_list - Frees the list and str of each node
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
