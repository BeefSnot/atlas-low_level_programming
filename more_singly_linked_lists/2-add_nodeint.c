#include "lists.h"

static listint_t *new_node(const int n);

/**
 * add_nodeint - add a node at the top of list.
 * @head : pointer of a ponit to a list.
 * @n : value to set fro the new lsit to do.
 *
 * Return: pointer to a pointer of listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!(*head))
	{
		*head = new_node(n);
		return (*head);
	}

	new = new_node(n);
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * new_node - creates a new listint_t node.
 * @n: number to place inside the node.
 *
 * Return: pointer to the new node.
 */
static listint_t *new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

