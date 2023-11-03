#include "hash_tables.h"
#include <string.h>
#include <strings.h>

/**
 * hash_table_get - retrive a value
 * @ht: hash table
 * @key: what to look for
 * Return: a value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	index = hash_djb2((const unsigned char *)key) % ht->size;
	ptr = ht->array[index];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			return (ptr->value);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
