#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Namjoon");
	add_node_end(&head, "JK");
	print_list(head);
	return (0);
}
