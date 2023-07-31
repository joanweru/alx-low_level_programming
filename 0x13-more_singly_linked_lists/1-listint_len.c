#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to listint_t
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
