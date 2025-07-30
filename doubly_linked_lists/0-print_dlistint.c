#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - print all items in a doubly linked list
 * @h: pointer to head of list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		counter++;
		current_node = current_node->next;
	}
	return (counter);
}

