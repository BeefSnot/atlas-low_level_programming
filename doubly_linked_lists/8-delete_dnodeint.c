#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes node at specific index
 * @head: Pointer to the pointer to head of list
 * @index: Index of node being deleted start from 0
 *
 * Return: 1 if succeess -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		if (current_node->next != NULL)
			current_node->next->prev = NULL;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
		return (-1);

	if (current_node->prev != NULL)
		current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;

	free(current_node);
	return (1);
}
