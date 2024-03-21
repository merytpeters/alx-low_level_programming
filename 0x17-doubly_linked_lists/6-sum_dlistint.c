#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data in the list
 * @head: Pointer to the head
 * Return: 0, if the lis is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
