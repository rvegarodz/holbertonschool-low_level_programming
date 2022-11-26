#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Return: index to key value (success)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, h_key;

	h_key = hash_djb2(key);
	index = h_key % size;
	return (index);
}
