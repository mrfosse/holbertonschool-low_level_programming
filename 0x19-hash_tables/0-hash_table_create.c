#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 * Return: returns pointer to table, or NULL on fail.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int count;

	if (size <= 0)
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);

	hash->size = size;

	count = 0;
	while (count < size)
	{
		hash->array[count] = NULL;
		count++;
	}
	return (hash);
}
