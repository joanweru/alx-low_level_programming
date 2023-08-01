#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list
 * @head: pointer to head of the listint_t list.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *store, *dup = *head;
	unsigned int j = 0;

	if (!dup)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}
	for (; j < (index - 1); j++)
	{
		if (!dup->next)
			return (-1);

		dup = dup->next;
	}

	store = dup->next;
	dup->next = store->next;
	free(store);
	return (1);
}
