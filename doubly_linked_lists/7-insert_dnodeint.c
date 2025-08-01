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
 * insert_dnodeint_at_index - inserts a new node in list at position idx
 * @h: head of list
 * @idx: position at which to insert new node (0-indexed)
 * @n: value of new node
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert_at = *h;
	dlistint_t *new_node;
	int is_null = 0;

	/* check if list is empty */	
	if (insert_at == NULL)
	{
		is_null = 1;
	}
	else
	{
		/* If list not empty, look up indexed list item */
		insert_at = get_dnodeint_at_index(insert_at, (idx - 1));
	}

	/* Create new node */
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	/* Modify list links */
	if (is_null == 1)
	{
		*h = new_node;
		return (new_node);
	}
	if (insert_at == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->next = insert_at->next;
		new_node->prev = insert_at;
		insert_at->next = new_node;
		insert_at = new_node->next;
		insert_at->prev = new_node;
	}
	return (new_node);
}

