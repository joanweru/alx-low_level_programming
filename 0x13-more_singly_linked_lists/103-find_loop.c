#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: pointer to listint_t
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (head == NULL)
		return (NULL);

	while (first && second && second->next)
	{
		first = first->next;/*liiists*/
		second = second->next->next;

		if (first == second)/*hobiiits*/
		{
			second = head;
			while (second != first)
			{
				second = second->next;
				first = first->next;
			}
			return (first);
		}
	}
	return (NULL);
}

