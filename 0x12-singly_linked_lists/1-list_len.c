#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - checks the number of elements in the linked list
 * @h: pointer to the list_t list
 *
 * Return: Number of nodes in h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
