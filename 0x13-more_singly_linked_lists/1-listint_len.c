#include "lists.h"

/**
 * listint_len - Returns only the number of elements
 * @h: Pointer to first node
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
