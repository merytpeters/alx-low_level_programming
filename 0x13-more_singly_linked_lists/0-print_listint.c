#include "lists.h"

/**
 * print_listint - Prints all the elements of a list
 * @h: Pointer to the first node of list
 * Return: Integer
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
