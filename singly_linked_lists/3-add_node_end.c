#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: Head of linked list
 * @str: Srting input
 * Return: New node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
        {
		list_t *temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
