#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - counts number of elements in a list
 * @h:  singly linked list to print
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int counter = 0;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}

