#include "hash_tables.h"

/**
 * hash_table_get - reads an element of the hash table.
 * @ht: is the hash table you want to read..
 * @key: is the key.
 * Return: returns the value of the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *find_node;

	if (key == NULL || ht == NULL)
		return (0);

	find_node = ht->array[key_index((const unsigned char *)key, ht->size)];
	if (find_node == NULL)
		return (NULL);

	while (find_node != NULL)
	{
		if (strcmp(find_node->key, key) == 0)
			return (find_node->value);

		find_node = find_node->next;
		printf("hit the while loop\n");
	}
	return (NULL);
}
