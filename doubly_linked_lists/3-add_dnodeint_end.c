#include "lists.h"
/**
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tailnode = *head;

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (*head);
	}
	while (tailnode->next != NULL)
	{
		tailnode = tailnode->next;
	}
	tailnode->next = newnode;
	newnode->prev = tailnode;
	return (newnode);
}
