#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 * @h: Pointer to the head
 * Return: The number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
