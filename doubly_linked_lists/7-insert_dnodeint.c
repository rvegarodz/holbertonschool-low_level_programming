#include "lists.h"
/**
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *newnode, *temp = *h;

	while (*h != NULL)
	{
		count++;
		temp = temp->next;
		if (count == idx)
			break;
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = temp->prev;
	newnode->n = n;
	newnode->next = temp;
	temp->prev->next = newnode;
	temp->prev = newnode;
	return (newnode);
}
