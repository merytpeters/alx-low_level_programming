#include "lists.h"

/**
 * print_list - Prints elements in a list
 * @h: Pointer to the head of the linked list
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		num++;
	}
	return (num);
}
