#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add or update.
 * @key: is the key,.
 * @value: is the value of the associated key.
 * Return: returns 1 if success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;

	if (key == NULL || ht == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[key_index((const unsigned char *)key, ht->size)];
	ht->array[key_index((const unsigned char *)key, ht->size)] = new_node;
	return (1);

}
