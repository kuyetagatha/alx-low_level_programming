#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem on a newl
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * @array: array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
