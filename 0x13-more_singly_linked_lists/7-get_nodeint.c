#include "lists.h"

/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: pointer to head listint_t
 * @index:  index of node to locate
 * Return: pointer to node, NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	 j = 0;

	for (; j < index; j++)
	{
		if (!head)
			return (NULL);

		head = head->next;
	}
	return (head);
}
