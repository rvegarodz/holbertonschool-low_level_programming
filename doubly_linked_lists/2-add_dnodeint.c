#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer to head of a list
 * @n: value to add
 * Return: pointer to new node (success) or NULL (failed)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
