#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts new node at given position
 * @h: Pointer to head of list
 * @idx: Index where new node should be added, starting from 0
 * @n: Value to be inserted into new node
 *
 * Return: Address of new node, of NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node; /* pointer to new node */
	dlistint_t *current = *h; /* pointer to traverse list */
	unsigned int i = 0; /* counter to track current position */

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL) /* check if mem allocation failed */
		return (NULL);

	new_node->n = n; /* set value of new node */

	if (idx == 0) /* if index is 0, add node at beginning */
	{
		new_node->next = *h; /* point new node to current head */
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node; /* update prev head's prev ptr */
		*h = new_node; /* update head to new node */
		return (new_node); /* address of new node */
	}
	/* traverse list to find position to insert new node */
	while (current != NULL && i < idx - 1)
	{
		current = current->next; /* next node */
		i++;
	}
	if (current == NULL) /* if reached end of list */
	{
		free(new_node); /* free allocated mem */
		return (NULL);
	}
	new_node->next = current->next; /* point new node to next node */
	new_node->prev = current; /* point new node to previous node */
	if (current->next != NULL)
		current->next->prev = new_node; /*update next node's prev ptr */
	current->next = new_node; /* update current node's next pointer */

	return (new_node); /* address of new node */
}
