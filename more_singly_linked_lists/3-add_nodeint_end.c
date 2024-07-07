#include "lists.h"

static listint_t *new_node(const int n);
/**
 * add_nodeint_end - adds a node to the end of a list.
 * @head: pointer of points to the head of a list.
 * @n: number to set the new node to.
 *
 * Return: point top of a list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (!(*head))
	{
		*head = new_node(n);
		return (*head);
	}

	temp = *head;
	while (temp)
	{
		if (!temp->next)
		{
			new = new_node(n);
			temp->next = new;
			break;
		}
		temp = temp->next;
	}
	return (*head);
}

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

