#include "lists.h"

/**
 * dlistint_len - Returns number of elements in list
 * @h: Pointer to head of list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
