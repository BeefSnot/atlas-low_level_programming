#include "hash_tables.h"

/**
 * key_index - Gives index of a key
 * @key: Key
 * @size: Size of the array in the hash table
 *
 * Description:
 *
 * Return: Index the key/value pair should be stored in array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;
    unsigned long int index;

    hash_value = hash_djb2(key);
    index = hash_value % size;

    return (index);
}
