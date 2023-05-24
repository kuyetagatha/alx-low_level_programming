#include "function_pointers.h"

/**
 * int_index - return index place if comparion  = true, else -1
 * @size: size of elements in array
 * @array: array
 * @cmp: pointer to func of one of the 3 in main
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array  == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j  = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
