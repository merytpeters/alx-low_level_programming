#include "lists.h"

/**
 * add_dnodeint_end - Adds new note to the end of a list
 * @head: Double pointer to the head
 * @n: Data integer
 * Return: The address of the new element, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}

	end_node->next = new_node;
	new_node->prev = end_node;

	return (new_node);
}
