#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: location of th key
 * @size: is the size of the array of the hash table
 * Return: returns the index where the key is stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
