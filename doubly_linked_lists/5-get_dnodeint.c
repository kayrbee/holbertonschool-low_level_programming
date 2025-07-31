#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_dnodeint_at_index - return the node at the requested position
 * @head: head of list
 * @index: requested node
 * Return: value of index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_pos = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while ((i < index) && (current_pos != NULL))
	{
		current_pos = current_pos->next;
		i++;
	}
	if (current_pos != NULL)
		return (current_pos);
	else
		return (NULL);
}

