#include "lists.h"

/**
 * free_listint - Frees the list
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
