#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: pointer to listint_t
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *new;

	if (!*head)
		return (0);

	i = (*head)->n;/*hmmm*/
	new = (*head)->next;
	free(*head);/*riiight*/
	*head = new;
	return (i);
}
