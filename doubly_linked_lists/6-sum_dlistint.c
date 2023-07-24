#include "lists.h"
/**
 * sum_dlistint - returns the sum of all node data
 * @head: head of node
 * Return: sum of node data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
