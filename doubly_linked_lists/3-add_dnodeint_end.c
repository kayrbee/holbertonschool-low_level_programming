#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a node to end of list
 * @head: pointer to head of list
 * @n: value of new node
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}

