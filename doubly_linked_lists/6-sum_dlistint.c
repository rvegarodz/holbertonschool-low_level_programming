#include "lists.h"
/**
 * sum_dlistint - function that sum all the data of a linked list
 * @head: pointer to first node
 * Return: sum of all the data (success)
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
