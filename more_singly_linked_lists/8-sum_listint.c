#include "lists.h"

/**
 * sum_listint - sums all the values of the list in listint_t
 * @head: pointer to the head of a list.
 *
 * Return: Sum (INT) else 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

