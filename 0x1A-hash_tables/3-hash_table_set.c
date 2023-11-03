#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * make_node - makes a hash node
 * @key: key
 * @value: value
 * Return: a node of hash table, NULL if something wrong happens
 */
hash_node_t *make_node(char *key, char *value)
{
	hash_node_t *ptr;

	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
		return (NULL);
	ptr->key = strdup(key);
	if (ptr->key == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->value = strdup(value);
	if (ptr->value == NULL)
	{
		free(ptr->key);
		free(ptr);
		return (NULL);
	}
	ptr->next = NULL;
	return (ptr);
}


/**
 * hash_table_set - set a value to the hash
 * @ht: hash table
 * @key: - element to look by
 * @value: - what to store
 * Return: 1 if success, 0 otherise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int dig;
	hash_node_t *holder, *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || value == NULL || strlen(key) == 0)
	dig = key_index((const unsigned char *)key, ht->size);
	holder = ht->array[dig];
	while (holder != NULL)
	{
		if (strcmp(holder->key, key) == 0)
		{
			free(holder->value);
			holder->value = strdup(value);
			if (holder->value == NULL)
				return (0);
			return (1);
		}
		holder = holder->next;
	}
	tmp = make_node((char *)key, (char *)value);
	if (tmp == NULL)
		return (0);
	tmp->next = ht->array[dig];
	ht->array[dig] = tmp;
	return (1);

}
