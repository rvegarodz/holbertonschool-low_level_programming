#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to head
 * Return: number of nodes (success)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
