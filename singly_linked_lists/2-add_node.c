#include "lists.h"
/**
 * add_node - function to add a new node at the beginning of list_t
 * @head: pointer to head node
 * @str: pointer to new string
 * Return: pointer to new node (success) or NULL (fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	char *copy = strdup(str);

	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL || copy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = copy;
	new_node->len = strlen(copy);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
