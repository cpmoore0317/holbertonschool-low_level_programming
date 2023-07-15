#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - adds a node
 * @head: is the head node
 * @str: string
 * Return: a new node
 */
list_t *add_node(list_t **head, const char *str)
{
        list_t *new = malloc(sizeof(list_t));
        if (new == NULL)
                return (NULL);

        new->len = strlen(str);
        new->str = strdup(str);
        new->next = *head;
        *head = new;

        return (new);
}
