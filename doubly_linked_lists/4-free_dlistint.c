#include "lists.h"
/**
 * free_dnodeint - function that frees a list
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tailnode;

	while (tailnode->next != NULL)
	{
		tailnode = head;
		tailnode = tailnode->next;
		free(head);
	}
}
