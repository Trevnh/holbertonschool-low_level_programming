#include "lists.h"
/**
 * add_node - Adds a node to the end of list with str
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: List with added node of str to head
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while(temp)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
