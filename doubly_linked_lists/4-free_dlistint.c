#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free memory used by a dlist
 * @head: head of dlist
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (current != NULL)
		{
			tmp = current->next;
			free(current);
			current = tmp;
		}
	}
}

