#include "lists.h"

/**
 * add_nodeint - Adds a new node to beginning of list
 * @head: Pointer to the first node
 * @n: data for new node
 * Return: Address of the new element (success) , NULL (failure)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
