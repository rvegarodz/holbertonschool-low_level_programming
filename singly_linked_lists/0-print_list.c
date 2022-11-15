#include "lists.h"
/**
 * print_list - prints all the elements of list_t
 * @h: pointer to head node
 * Return: number of nodes of list_t (success)
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
