#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - releases the memory allocated for a list
 * @head: A pointer to the first node of the  list to free
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
