#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees memory taken by a linked list
 * @head: head of list to free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

