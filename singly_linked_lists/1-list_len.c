#include "lists.h"
/**
 * list_len - function that returns the number of elements in list_t
 * @h: pointer to head node
 * Return: number of nodes of list_t (success)
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
