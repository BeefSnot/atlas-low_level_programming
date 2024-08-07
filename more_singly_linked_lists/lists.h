#ifndef _LISTS_H
#define _LISTS_H
#include <stdlib.h>
#endif


/**
 * struct listint_s - singly list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int sum_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int pop_listint(listint_t **head);
listint_t *add_nodeint_end(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
void free_listint2(listint_t **head);
void free_listint(listint_t *head);
size_t listint_len(const listint_t *h);
