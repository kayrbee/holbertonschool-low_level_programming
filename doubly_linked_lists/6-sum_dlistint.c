#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - sum every value in a dlist
 * @head: start of list
 * Return: sum of values in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (0);
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}

