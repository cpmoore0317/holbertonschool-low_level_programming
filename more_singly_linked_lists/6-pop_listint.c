#include "lists.h"
/**
 * pop_listint - Delete the head
 * @head: head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
