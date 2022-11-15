#include "lists.h"
/**
 * add_node_end - function that adds node at the end of list_t
 * @head: pointer to the head node
 * @str: pointer to new string
 * Return: pointer to new node (success) or NULL (fail)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *last = *head;

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	return (newnode);
}
