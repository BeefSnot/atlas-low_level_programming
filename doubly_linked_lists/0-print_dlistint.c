#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print all elements of doubly linked list
 * @h: Pointer to head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0; /* counter */

	/* traverse and print the elements */
	while (h != NULL)
	{
		printf("%d\n", h->n); /* print of current node */
		h = h->next; /* next node */
		node_count++;
	}

	return (node_count); /* the number of nodes */
}
