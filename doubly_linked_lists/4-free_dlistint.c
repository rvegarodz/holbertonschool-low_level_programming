#include "lists.h"
/**
 * free_dnodeint - function that frees a list
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tailnode = head;

	while (tailnode->next != NULL)
	{
		tailnode = tailnode->next;
		free(head);
		head = tailnode;
	}
	free(head);
}
