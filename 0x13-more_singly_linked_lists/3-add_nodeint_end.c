#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to list
 * @n: integer data to insert into new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;
	listint_t *nn;

	nn = malloc(sizeof(listint_t));

	if (!nn)
		return (NULL);

	nn->n = n;

	if (!*head)/*cooode*/
	{
		nn->next = *head;
		*head = nn;/*riiiight*/
	}
	else
	{
		nn->next = NULL;/*iiii*/
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = nn;
	}
	return (nn);

}

