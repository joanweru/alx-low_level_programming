#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head; /*wiiiiin*/
		head = head->next;
		free(t);/*stable*/
	}
	free(head);
}
