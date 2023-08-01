#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to head of linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	int j;
	size_t size = 0;
	listint_t *store;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			store = (*h)->next;
			free(*h);
			*h = store;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}

	*h = NULL;

	return (size);
}
