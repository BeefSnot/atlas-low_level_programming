#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds new node at beginning of the list.
 * @head: Double pointer to head of list
 * @n: Integer to be added to new node
 *
 * Return: Address of new element NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }

    *head = new_node;
    return (new_node);
}
