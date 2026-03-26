#include "lists.h"

/**
 * sum_dlistint - Sums all node values
 * @head: Address of the head of linked list
 *
 * Return: The sum of all node values, 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
