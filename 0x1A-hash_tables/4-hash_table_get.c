#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: the hash table you want to look into
 * @key: The key you are looking for
 *
 * Return: If the key couldn't be found - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	tmp = ht->array[index];
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	return ((tmp == NULL) ? NULL : tmp->value);
}
