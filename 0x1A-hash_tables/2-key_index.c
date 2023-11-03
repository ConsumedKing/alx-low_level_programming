#include "hash_tables.h"
/**
 * key_index - return the index at which the item will be stored
 * @key: what to hash
 * @size: size of hash_tables
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int digest;

	digest = hash_djb2(key);
	return (digest % size);
}
