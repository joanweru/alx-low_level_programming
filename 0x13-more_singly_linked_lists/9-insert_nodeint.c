#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of listint_t list
 * @idx:  index of the list where the new node should be added
 * @n: data to insert in new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node, *store = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = store;
		*head = new_node;
		return (new_node);
	}

	for (j = 0; j < (idx - 1); j++)
	{
		if (!store || !store->next)
			return (NULL);

		store = store->next;
	}

	new_node->next = store->next;
	store->next = new_node;

	return (new_node);
}

