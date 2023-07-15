#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a listint node at index
 *
 * @head: head of list
 * @index: index to delete at
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous = current->next;
	current->next = previous->next;
	free(previous);

	return (1);
}
