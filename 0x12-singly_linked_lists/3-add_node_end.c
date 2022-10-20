#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current_node;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new;
	}

	return (*head);
}
