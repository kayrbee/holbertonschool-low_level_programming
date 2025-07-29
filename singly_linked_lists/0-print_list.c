#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - prints all elements in a list
 * @h:  singly linked list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int counter = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		current = current->next;
	}
	return (counter);
}

