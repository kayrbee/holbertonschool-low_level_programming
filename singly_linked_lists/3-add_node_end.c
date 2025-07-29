#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a node to end of list
 * @head: current position of head node
 * @str: value of new node
 * Return: address of new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int len = 0;
	list_t *new_node, *current_node;

	if (str == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
		return (NULL);
	new_node = (list_t *)malloc(sizeof(new_node));
	if (new_node == NULL)
	{
		free(s);
		return (NULL);
	}
	while (s[len] != '\0')
		len++;
	new_node->str = s;
	new_node->len = len;
	new_node->next = NULL;
	current_node = *head;
	if (current_node == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
	return (new_node);
}

