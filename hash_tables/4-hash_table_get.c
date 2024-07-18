#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Pointer to hash table
 * @key: Key to look for
 *
 * Return: Value associated with the key, of NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index; /* index in hash table array */
    hash_node_t *current_node; /* pointer to iterate linked list */

    if (!ht || !key || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);

    current_node = ht->array[index];
    while (current_node)
    {
        if (strcmp(current_node->key, key) == 0)
            return (current_node->value); /* key found, return val */
        current_node = current_node->next;
    }

    return (NULL);
}
