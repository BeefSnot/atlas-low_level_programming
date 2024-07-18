#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints all key/value pairs in hash table
 * @ht: Pointer to hash table
 *
 * Description:
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first_element = 1;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first_element)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);

			node = node->next;
			first_element = 0;
		}
	}

	printf("}\n");
}
