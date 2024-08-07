#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds new node at end of the list
 * @head: Double pointer to top of list
 * @n: Integer to be added to node
 *
 * Return: The address of the element, or NULL if fail.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *temp = *head;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;

    return (new_node);
}
