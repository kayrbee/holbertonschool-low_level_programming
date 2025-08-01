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
/**
 * delete_dnodeint_at_index - delete a node from a list
 * @head: pointer to start of list
 * @index: node to be deleted
 * Return: 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target = *head, *tmp;
	int result = 0;

	target = get_dnodeint_at_index(target, (index));

	if (target == NULL)
	{
		result = -1;
		return (result);
	}
	else
	{
		if (target->prev == NULL)
		{
			*head = target->next;
			if (target->next != NULL)
			{
				tmp = target->next;
				tmp->prev = NULL;
			}
			free(target);
		}
		else if (target->next == NULL)
		{
			tmp = target->prev;
			tmp->next = NULL;
			free(target);
		}
		else
		{
			tmp = target->prev;
			tmp->next = target->next;
			tmp = target->next;
			tmp->prev = target->prev;
			free(target);
		}
		result = 1;
	}
	return (result);
}


