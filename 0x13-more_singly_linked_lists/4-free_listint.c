#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: The head of the listint_t list to be freed
 */


void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
