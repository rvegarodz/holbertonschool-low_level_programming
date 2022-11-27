#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			printf("'%s' : '%s'", node->key, node->value);
		}
		if (i + 1 != ht->size)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
