#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of a list
 * @head: Pointer to the head
 * @index: Index of nodes
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
