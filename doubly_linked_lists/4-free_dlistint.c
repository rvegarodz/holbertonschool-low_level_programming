#include "lists.h"
/**
 * free_dnodeint - function that frees a list
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tailnode;

	while (head != NULL)
	{
		tailnode = head;
		head = tailnode->next;
		free(tailnode);
	}
}
