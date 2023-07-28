#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - To add a new node at the beginning of a linked list
 * @head: The double pointer to list_t list
 * @str: The new string to add in the node
 *
 * Return: The address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
