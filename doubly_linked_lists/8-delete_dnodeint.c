#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: double pointer to head of node
 * @index: index to delete
 * Return: list with deleted node, 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int i;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	temp = current->next;
	if (temp == NULL)
		return (-1);

	current->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = current;
	free(temp);

	return (1);
}
