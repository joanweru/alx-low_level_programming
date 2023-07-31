#include "lists.h"

/**
 * sum_listint - returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int j;

	j = 0;

	while (head)
	{
		j += head->n;
		head = head->next;
	}
	return (j);
}
