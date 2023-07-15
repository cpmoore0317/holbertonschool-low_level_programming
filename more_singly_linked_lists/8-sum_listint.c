#include "lists.h"
/**
 * sum_listint - Entry Point
 * @head: head
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
