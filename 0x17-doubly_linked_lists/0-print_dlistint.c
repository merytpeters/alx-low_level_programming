#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
