#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a listint_t node at index in list
 *
 * @head: head of list
 * @idx: index to add node at, starting at 0
 * @n: value of node to add
 *
 * Return: new node address if success, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return;

	new_node->n = n;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return;
	}

	current = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return;
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new_node->next = current->next;
	current->next = new_node;

	return new_node;
}

