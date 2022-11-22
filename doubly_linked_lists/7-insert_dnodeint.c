#include "lists.h"
/**
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *newnode, *temp = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (*h != NULL)
	{
		count++;
		temp = temp->next;
		if (count == idx)
			break;
	}
	if (idx == count + 1)
		return (add_dnodeint_end(h, n));
	if (idx > count + 2)
		return (NULL);
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
