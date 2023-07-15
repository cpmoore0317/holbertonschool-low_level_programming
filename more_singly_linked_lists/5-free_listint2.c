#include "lists.h"
/**
 * free_listint2 - freed memory
 * @head: head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		listint_t *next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
