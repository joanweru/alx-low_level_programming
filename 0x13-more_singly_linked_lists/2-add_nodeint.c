#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: pointer to list_t
 * @n: integer data to insert into new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	(*head)->n = n;
	(*head)->next = node_new;/*niiice*/
	return (*head); /**interesting*/

}
