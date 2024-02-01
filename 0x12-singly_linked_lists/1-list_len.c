#include "lists.h"

/**
 * list_len - Number of elements only
 * @h: Pointer to head of list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
