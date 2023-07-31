#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *store;

	if (!head)
		return;

	while (*head)
	{
		store = (*head)->next;
		free(*head);
		*head = store;
	}

	*head = NULL;
}
