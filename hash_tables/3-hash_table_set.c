#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to add or update
 * @key: key (cannot be an empty string)
 * @value: value associated with key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *node;
	
	/* find index*/
	index = key_index((const unsigned char *) key, ht->size);
	if (ht == NULL || key == 0)
	{
		return (0);
	}
	/*create new node*/
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	/*place node at index*/
	ht->array[index] = node;
	return (1);
}
