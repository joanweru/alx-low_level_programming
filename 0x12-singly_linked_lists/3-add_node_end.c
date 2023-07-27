#include "lists.h"

/**
 * add_node_end - adds new node at the end of linked list
 * @head: double pointer to list_t list
 * @str: string to add in new node
 * Return: address of the new element, NULL on failer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_new;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	node_new = malloc(sizeof(list_t));
	if (!node_new)
		return (NULL);

	node_new->str = strdup(str);
	node_new->len = len;
	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
		return (node_new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node_new;

	return (node_new);
}
