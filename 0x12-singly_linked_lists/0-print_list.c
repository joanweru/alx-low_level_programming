#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements in a linked list
 * @h: pointer to list_t list to print
 * Return: no of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nds;

	nds = 0;

	while (h)/*comment*/
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");/*hhrrttyy4556*/
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nds++;
	}

	return (nds);
}
