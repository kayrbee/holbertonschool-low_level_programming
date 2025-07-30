#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - count all items in a doubly linked list
 * @h: pointer to head of list
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		counter++;
		current_node = current_node->next;
	}
	return (counter);
}

