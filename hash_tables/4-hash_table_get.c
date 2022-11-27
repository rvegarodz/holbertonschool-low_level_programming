#include "hash_tables.h"
/**
 * hash_table_get - get value of node in a specific index
 * @ht: pinter to hash table
 * @key: that access the value
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (0);
	 index = key_index((const unsigned char *)key, ht->size);
	 node = ht->array[index];
	 while (node != NULL)
	 {
		 if (strcmp(node->key, key) == 0)
		 {
			 return (node->value);
		 }
		 else
		 {
			 node = node->next;
		 }
	 }
	return (NULL);
}
