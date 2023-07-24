#include "lists.h"
/**
 * get_dnodeint_at_index - get the node of a linked list
 * @head: the head of the list
 * @index: index
 * Return: data of the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || index >= dlistint_len(head))
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
		current = current->next;

	return (current);
}
