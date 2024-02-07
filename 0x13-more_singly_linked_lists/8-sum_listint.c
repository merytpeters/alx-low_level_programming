#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data in the list
 * @head: Pointer to first node
 * Return: Sum of data , 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
