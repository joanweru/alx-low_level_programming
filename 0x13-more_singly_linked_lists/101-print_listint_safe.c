#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of linked list
 * Return: prints a listint_t linked list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t new_node;
	const listint_t *store = NULL;
	size_t print = 0;
	const listint_t *j = NULL;

	store = head; /*riiight*/
	while (store)
	{
		printf("[%p] %d\n", (void *)store, store->n);
		print++;
		store = store->next;
		j = head;/*jaaaaaay*/
		new_node = 0;

		for (; new_node < print; new_node++)
		{
			if (store == j)
			{
				printf("-> [%p] %d\n", (void *)store, store->n);
				return (print);
			}
			j = j->next;
		}

		if (!head)
			exit(98);
	}
	return (print);
}
