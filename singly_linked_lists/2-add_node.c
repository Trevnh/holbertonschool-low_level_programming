#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a node to the end of list with str
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: List with added node of str to tail
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	len = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (!dup)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
