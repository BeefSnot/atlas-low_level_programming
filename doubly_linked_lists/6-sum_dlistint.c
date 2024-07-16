#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data of a dlistint_t list
 * @head: Pointer to head of list
 *
 * Return: Sum of all data (n) in a list, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
