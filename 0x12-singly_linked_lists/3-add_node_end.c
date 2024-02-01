#include "lists.h"

/**
 * add_node_end - Adds new nodes to the end
 * @head: Double pointer to list_t
 * @str: string
 * Return: Address of new string (Success), NULL (Failure)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end_node;

	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	new_node->len = len;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (end_node->next)
	{
		end_node = end_node->next;

		end_node->next = new_node;
	}
	return (new_node);
}
