#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node to start of list
 * @head: current position of head node
 * @str: value of node
 * Return: new head
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	int len = 0;
	list_t *new_node = (list_t *)malloc(sizeof(new_node));

	if (new_node == NULL)
		return (NULL);
	while (s[len] != '\0')
		len++;
	new_node->str = s;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}

