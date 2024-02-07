#include "lists.h"

/**
 * pop_listint - Deletes the head
 * @head: Pointer to the list
 * Return: The head node's data, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if  (!head || !*head)
		return (0);

	data = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (data);
}
