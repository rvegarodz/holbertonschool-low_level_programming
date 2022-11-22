#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to first node
 * @index: index of the node (starting in 0)
 * Return: address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index == 0)
		return (head);
	while (head != NULL)
	{
		count++;
		head = head->next;
		if (count == index)
			break;
	}
	if (index > count)
	{
		return (NULL);
	}
	return (head);
}
