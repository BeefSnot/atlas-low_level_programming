#include "lists.h"

/**
 * free_listint2 - frees entire node in lists, and resets head to NULL.
 * @head: pointer of points to a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	if (*head)
	{
		temp = *head;
		*head = NULL;
		free_listint(temp);
		return;
	}
}
/**
 * free_listint - frees the entire node in a list.
 * @head: pointer to a list.
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}

