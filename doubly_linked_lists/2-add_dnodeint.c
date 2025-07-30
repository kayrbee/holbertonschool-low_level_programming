#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add node to head of dlist
 * @head: current head of dlist
 * @n: int value of new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	/* Update list linkages */
	new_node->next = *head;
	if (current != NULL)
		current->prev = new_node;

	*head = new_node;
	return (*head);
}

