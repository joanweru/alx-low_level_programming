#include "lists.h"

/**
 * add_node - adds a new node at the end of a list_t list.
 * @head: pointer to a list_t pointer that points to head struct
 * @str: pointer to a string that adds as node
 * Return: pointer to new head of list, NULL if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	unsigned int size = 0;


	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	while (str[size])
		size++;

	new_head->len = size;
	new_head->str = strdup(str);
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
