#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to first node
 * @idx: position to add
 * @n: value to add
 * Return: address of the new node (success) or NULL (failed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head, *wnode = *head;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = temp;
		free(head);
		return (1);
	}
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
		if (count == index)
		{
			wnode = temp->prev;
			wnode->next = temp->next;
			temp = wnode->next;
			temp->prev = wnode;
		}
	}
	if (index > count)
		return (-1);
	return (1);
}
