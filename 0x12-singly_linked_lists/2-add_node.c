#include "lists.h"
/**
 * add_node - Adds a new node at the beginning
 *		of a list_t list.
 * @head:Head of the linked list.
 * @str: String to store in the list.
 * Return: Address of the head.
 */

list_t *add_node(list_t **head, const char *str)
	{
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
