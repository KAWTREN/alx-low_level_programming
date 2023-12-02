#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key. It cannot be an empty string.
 * @value: The value associated with the key. It must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *crr;

    if (ht == NULL || key == NULL || strlen(key)== 0)
        return(NULL);

    index = key_index(( const unsigned char *)key, ht->size);
    crr = ht->array[index];
    while (crr)
    {
        if (strcmp(crr->key, key) == 0)
        {
            return (crr->value);
        }
        crr = crr->next;
    }
    return (NULL);
}