#include "lists.h"

/**
 * list_len - Finds the number of elements in a list
 * @h: stingly linked list
 * Return: number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
