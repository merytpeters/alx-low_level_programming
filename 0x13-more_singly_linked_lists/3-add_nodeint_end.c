#include "lists.h"

/**
 * add_nodeint_end - Adds node to end of list
 * @head: Pointer to first node
 * @n: Data for end node
 * Return: Address of new node (success) , NULL (failure)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (!*head)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
