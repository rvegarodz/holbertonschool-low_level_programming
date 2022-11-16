#include "lists.h"
/**
 * free_list - function that frees list_t
 * @head: pointer to head node
 */
void free_list(list_t *head)
{
	list_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = newnode->next;
		free(newnode->str);
		free(newnode);
	}
}
